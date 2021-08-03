#!/bin/zsh
opt \
    -analyze \
    -load=build/gatlin/libgatlin.so \
    -gatlin \
    -gating=cap \
    -ccv=0 -ccf=1 -cct=0\
    -ccvv=0 -ccfv=0 -cctv=0\
    -cvf=0 \
    -skipfun=skip.fun \
    -skipvar=skip.var \
    -lsmhook=lsm.hook \
    -prt-good=0 -prt-bad=0 -prt-ign=0 \
    -fwd-depth=5 -bwd-depth=5 \
    -stats \
    /home/tianyu/kernel-4.19/vmlinux.bc \
    -o /dev/null 2>&1 | tee test.log

