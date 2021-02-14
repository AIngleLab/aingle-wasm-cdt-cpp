CXX := g++
CXXFLAGS := -fno-rtti -O3 -g -std=c++17 -fexceptions

LLVM_DIR := /home/cl/install/
JSONDIR := /home/cl/aingle/tools/jsoncons/include

# LLVM C++ options and LLVM link options
LLVM_CXXFLAGS := `${LLVM_DIR}/bin/llvm-config --cxxflags`
LLVMLDFLAGS := `${LLVM_DIR}/bin/llvm-config --ldflags --libs --system-libs`

SOURCES = aingle-abigen.cpp

OBJECTS = $(SOURCES:.cpp=.o)
EXES = $(OBJECTS:.o=)
CLANGLIBS = \
     -lclangTooling \
     -lclangBasic \
     -lclangASTMatchers \
     -lclangRewrite \
     -lclangToolingCore \
     -lclangFrontend \
     -lclangDriver \
     -lclangSerialization \
     -lclangParse \
     -lclangSema \
     -lclangAnalysis \
     -lclangAST \
     -lclangEdit \
     -lclangLex \
     -lclangBasic \
     -lclangEdit \
     -lLLVMipo \
     -lLLVMScalarOpts \
     -lLLVMInstCombine \
     -lLLVMTransformUtils \
     -lLLVMAnalysis \
     -lLLVMTarget \
     -lLLVMOption \
     -lLLVMMCParser \
     -lLLVMMC \
     -lLLVMObject \
     -lLLVMBitReader \
     -lLLVMCore \
     -lLLVMSupport \
     -lLLVMDemangle

all:	aingle-abigen

#Not obvious, see my blog
aingle-abigen: aingle-abigen.cpp
	$(CXX) -o $@ $< $(CLANGLIBS) $(LLVMLDFLAGS)  -I./include -I${JSONDIR} -fexceptions -std=c++17 -I${LLVM_DIR}/include -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS -fno-rtti
	@cp aingle-abigen ../../install/bin/

.PHONY: all clean

#make clean manually
clean:
	rm -f $(OBJECTS) $(EXES) *.o aingle-abigen
