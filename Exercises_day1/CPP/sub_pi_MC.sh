#!/bin/bash
#SBATCH --job-name=pi_monte_carlo
#SBATCH --output=pi_monte_carlo.out
#SBATCH --account=osmlab
#SBATCH --ntasks=3
#SBATCH --partition=sandyb
#
./pi_monte_carlo
