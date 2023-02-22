#!/bin/bash
cpp -o c $CFILE
gcc -c $CFILE -o ${CFILE%.c}.o
gcc -S $CFILE -o ${CFILE%.c}.s
gcc $CFILE -o cisfun
4-puts.c : C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Use the function puts. You are not allowed to use            printf. Your program should end with the value 0
5-printf.c : C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.Use the function printf. You are not allowed 	     to use the function puts. Your program should return 0. Your program should compile without warning when using the -Wall gcc option.
