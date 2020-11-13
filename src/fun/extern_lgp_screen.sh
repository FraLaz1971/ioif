#!/usr/bin/env bash

echo "executing extern gnuplot launch $0 $@"
echo "extern_lgp_screen.sh: creating temp. files"
./testlibfun table.csv 1 1
ls *.gp *tsv
echo "executing extern gnuplot launch $0 $@"

gnuplot << EOF
set terminal qt persist
set xlabel 'time (s)'
set ylabel 'counts #'
set title 'My Awesome Plot'
plot 'fixed.tsv' using 1:2
EOF
