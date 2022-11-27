#!/bin/bash

SYSTEMC_HOME=~/systemc/systemc-2.3.3
input1=$1
input2=$2
output=$3

g++ -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux64 -o $output $input1 $input2 -lsystemc -lm
