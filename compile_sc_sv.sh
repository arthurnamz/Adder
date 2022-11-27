#!/bin/sh

xvlog -sv *.sv
xsc -c generator.cpp
xsc --shared
xelab testbench -timescale 1ns/1ps -debug all -sv_lib dpi
xsim testbench -R
