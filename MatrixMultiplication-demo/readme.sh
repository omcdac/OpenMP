#!/bin/bash

module load compiler/intel/2018.4.057

#Default Optimization

icc -O2 -o mmSerialO2 mm.c

time ./mmSerialO2

#O3 Optimization

icc -O3 -o mmSerialO3 mm.c

time ./mmSerialO3

#Parallelization - OpenMP

icc -qopenmp -O3 -o mm-omp mm-omp.c

export OMP_NUM_THREADS=4

time ./mm-omp
