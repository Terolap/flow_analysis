PROGRAM       = run_jcorran

CXX           = g++
CXXFLAGS      = -g -O3 -Wall -Wno-deprecated

# Add JCorran library
CXXFLAGS     += $(shell jcorran-config-inc)
LDFLAGS      += $(shell jcorran-config-lib)
SOFLAGS       = -shared

# Add ROOT dependencies
CXXFLAGS += $(shell root-config --cflags)
LDFLAGS += -L/usr/lib64/root -lCore -lImt -lRIO -lNet -lHist -lGraf -lGraf3d -lGpad -lROOTVecOps -lTree -lTreePlayer -lRint -lPostscript -lMatrix -lPhysics -lMathCore -lThread -lMultiProc -pthread -lm -ldl -rdynamic

#Add parquet dependencies
# CXXFLAGS += $(shell pkg-config --cflags parquet)
LDFLAGS += $(shell pkg-config --libs parquet)

MAIN = run_jcorran.cpp

all: $(PROGRAM)

# Link the program and jcorranDict file
$(PROGRAM): $(MAIN)
	@echo "Linking $(PROGRAM) ..."
	$(CXX) -lPhysics -L$(PWD) $(MAIN) $(CXXFLAGS) $(LDFLAGS) -o $(PROGRAM)
	@ln -s $(shell jcorran-config-path)/include/jcorranDict_rdict.pcm jcorranDict_rdict.pcm # IMPORTANT
	@echo "done"

# Removal of files 
clean:
	rm -f *Dict* $(PROGRAM).o $(PROGRAM)

cl:
	clean $(PROGRAM)
