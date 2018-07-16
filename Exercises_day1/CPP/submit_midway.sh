#!/bin/bash
#SBATCH --job-name=pi
#SBATCH --output=comppi.out
#SBATCH --account=osmlab
#SBATCH --ntasks=1
#SBATCH --partition=sandyb
#
./comppi.exec
