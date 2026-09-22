#!/bin/sh

#SBATCH -J "MNXB11 Pi homework"
#SBATCH --time=00:07:00
#SBATCH -A hep2023-1-6
#SBATCH --mem 27G
#SBATCH -o CalculatePI_%u_%j.out

# Launch the calculatePI.sh application script using the container script
run_in_container_calculatePI.sh
