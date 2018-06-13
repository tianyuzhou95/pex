#!/bin/bash

#specify non default compiler here
#-DCMAKE_C_COMPILER= 
#-DCMAKE_CXX_COMPILER= 

mkdir build
pushd build
cmake ../ \
    -DLLVM_DIR=/opt/toolchain/llvm-git \
    -DLLVM_ROOT=/opt/toolchain/llvm-git \
    -DCMAKE_BUILD_TYPE=Debug \

make -j
popd
