#!/bin/bash
cpp -o c $CFILE
gcc -c $CFILE -o ${CFILE%.c}.o
gcc -S $CFILE -o ${CFILE%.c}.s
gcc $CFILE -o cisfun
