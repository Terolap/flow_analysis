// Some libraries
#include <stdio.h>
#include <vector>
#include <exception>
#include <fstream>
#include <string>
// Read parquet file
#include <arrow/io/api.h>
#include <parquet/stream_reader.h>
// Root libraries
#include <TFile.h>
#include <TClonesArray.h>
#include <TObject.h>
#include <TROOT.h>
#include <TStyle.h>
// JCORRAN libraries
#include <AliJFFlucAnalysisTProfile.h>
#include <AliJBaseTrack.h>

/* Some arrow libraries if needed
#include <arrow/api.h>
#include <arrow/ipc/api.h>
#include <arrow/filesystem/api.h>
#include <parquet/arrow/reader.h>
#include <parquet/arrow/writer.h>
    Some Root libraries if needed
#include <TRandom3.h>
#include <TF1.h>
#include <TF2.h>
#include <TF3.h>
#include <TGraphErrors.h>
#include <TComplex.h>
*/

int32_t find_maxTrk(std::string file) {
    // Opening parquet file
    std::shared_ptr<arrow::io::ReadableFile> infile;
    PARQUET_ASSIGN_OR_THROW(
        infile,
        arrow::io::ReadableFile::Open(file)
    );
    // create streamreader
    parquet::StreamReader stream{parquet::ParquetFileReader::Open(infile)};

    int32_t maxTrk = 0;
    // Find largest number of tracks in a single event
    while ( !stream.eof() ) {
        int32_t curTrk;
        stream.SkipColumns(5);
        stream >> curTrk;
        stream.SkipColumns(2);
        if (maxTrk < curTrk){
            maxTrk = curTrk;
        }
        stream >> parquet::EndRow;
    }
    std::cout << maxTrk << std::endl;
    return maxTrk;
}

int32_t find_curEvt(std::string file) {
    // Opening parquet file
    std::shared_ptr<arrow::io::ReadableFile> infile;
    PARQUET_ASSIGN_OR_THROW(
        infile,
        arrow::io::ReadableFile::Open(file)
    );
    // create streamreader
    parquet::StreamReader stream{parquet::ParquetFileReader::Open(infile)};

    int32_t curEvt;
    stream >> curEvt;
    stream = parquet::StreamReader();
    std::cout << curEvt << std::endl;
    return curEvt;
}

int32_t find_EvtCent(std::string file, int32_t iEvt) {
    // Opening parquet file
    std::shared_ptr<arrow::io::ReadableFile> infile;
    PARQUET_ASSIGN_OR_THROW(
        infile,
        arrow::io::ReadableFile::Open(file)
    );
    // create streamreader
    parquet::StreamReader stream{parquet::ParquetFileReader::Open(infile)};
    // Find largest number of tracks in a single event

    int32_t Evt;
    double cent;
    while ( !stream.eof() ) {
        stream >> Evt >> cent >> parquet::EndRow;
        if (iEvt ==  Evt){
            return cent;
        }
    }
    std::cout << "Error: Could not find event " << iEvt << "in file" << file << std::endl;
    return 0;
}

int32_t run_code(std::string files[], int files_num, std::string cent_file, const char* output_file, double eta_min, double eta_max){
    // Centrality binning
    AliJFFlucAnalysisTProfile::BINNING binning = AliJFFlucAnalysisTProfile::BINNING_CENT_PbPb;
    // Create Analysis object
    AliJFFlucAnalysisTProfile *pfa = new AliJFFlucAnalysisTProfile();
    pfa->SetBinning(binning);
    // Create output file
    TFile *pfo = new TFile(output_file,"recreate");
	TDirectory *phydroDir = pfo->mkdir("hydro");
	pfo->cd("hydro");
    // pfa->AddFlags(AliJFFlucAnalysisTProfile::FLUC_EBE_WEIGHTING);
    pfa->SetEtaRange(eta_min, eta_max);
    const double vertex[3] = {0.0,0.0,0.0};
	pfa->SetEventVertex(vertex);
	pfa->UserCreateOutputObjects();
    pfo->cd();
    for (int i = 0; i<files_num; i++) {
        std::string file = files[i];
        // Largest number of tracks in a event
        int32_t maxTrk = find_maxTrk(file);
        // Keep track when new event starts
        int32_t curEvt = find_curEvt(file);
        // Opening parquet file
        std::shared_ptr<arrow::io::ReadableFile> infile;
        PARQUET_ASSIGN_OR_THROW(
            infile,
            arrow::io::ReadableFile::Open(file)
        );
        // Create streamreader
        parquet::StreamReader stream{parquet::ParquetFileReader::Open(infile)};
        // Array for AliJBaseTrack objects
        TClonesArray *a = new TClonesArray("AliJBaseTrack", maxTrk);
        // Columns
        int32_t iEvt;
        double p_x;
        double p_y;
        double p_z;
        double p_t;
        int32_t iTrk;
        int32_t mc_number;
        int32_t charge;
        double cent;
        // Go through data
        while ( !stream.eof() ) {
            // Read a row from file
            stream >> iEvt >> p_x >> p_y >> p_z >> p_t >> iTrk >> mc_number >> charge >> parquet::EndRow;
            // If the row belongs to the next event
            if (curEvt < iEvt) {
                // use a
                cent = find_EvtCent(cent_file, curEvt);
                pfa->SetInputList(a);
                pfa->SetEventCentrality(cent);
                pfa->SetEventImpactParameter(-1);
                pfa->UserExec("");
                // ready for next
                a->Clear();
                curEvt = iEvt;
            }
            if (iTrk != -1){
                // Save values to array a
                new((*a)[a->GetEntriesFast()]) AliJBaseTrack(p_x, p_y, p_z, p_t, iTrk, mc_number, charge);
            } else { curEvt += 1; }
        }

        // Add the input of last array
        cent = find_EvtCent(cent_file, curEvt);
        pfa->SetInputList(a);
        pfa->SetEventCentrality(cent);
        pfa->SetEventImpactParameter(-1);
        pfa->UserExec("");
        // No need for array a anymore
        delete a;
    }
    // Analysis is done pfa can be deleted
    delete pfa;
    // Write
	pfo->Write();
	pfo->Close();
    std::cout << "." << std::endl;
    return 0;
}

int main(int argc, char *argv[]) {
    std::string directory;
    double eta_min;
    double eta_max;
    int oversample_s;
    int oversample_e;
    int files_num;
    std::string cent_filename;
    std::string output_filename;

    for(int i = 0; i<argc; i++) {
        if(strcmp(argv[i], "-d") == 0) {
			directory = argv[i+1];
        } else if(strcmp(argv[i], "--eta_min") == 0) {
            eta_min = std::stod(argv[i+1]);
        } else if(strcmp(argv[i], "--eta_max") == 0) {
            eta_max = std::stod(argv[i+1]);
        } else if(strcmp(argv[i], "--oversample_s") == 0) {
            oversample_s = std::stoi(argv[i+1]);
        } else if(strcmp(argv[i], "--oversample_e") == 0) {
            oversample_e = std::stoi(argv[i+1]);
        } else if(strcmp(argv[i], "--number_of_files") == 0) {
            files_num = std::stoi(argv[i+1]);
        } else if(strcmp(argv[i], "--centrality_filename") == 0) {
            cent_filename = argv[i+1];
        } else if(strcmp(argv[i], "--output_filename") == 0) {
            output_filename = argv[i+1];
        }
    }
    std::string filename[files_num];

    for(int i = 0; i<argc; i++) {
        if(strcmp(argv[i], "--filename") == 0) {
            for(int j = 0; j < files_num; j++){
                filename[j] = argv[i+1+j];
            }
        }
    }

    for(int i=oversample_s; i<oversample_e+1;i++) {

        std::string files[files_num];
        for(int j = 0; j < files_num; j++){
            files[j] = directory + filename[j] + std::to_string(i) + ".parquet";
        }

        std::string cent_file = directory + cent_filename + std::to_string(i) + ".parquet";

        std::string output_file_s = directory + output_filename + std::to_string(i) + ".root";
        const char* output_file = output_file_s.c_str();
        run_code(files, files_num, cent_file, output_file, eta_min, eta_max);
    }
    return 0;
}
