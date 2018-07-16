#!/bin/bash
#
#SBATCH --job-name=Hello
#SBATCH --output=output.out
#SBATCH --error=slurm_job.err
#
#SBATCH --ntasks=1
#SBATCH --time=01:00
### Executable
./hidiho.exec
