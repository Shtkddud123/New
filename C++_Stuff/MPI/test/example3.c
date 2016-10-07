// MPI send, MPI recv example

#include <mpi.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

  // Initialize the MPI environment
  MPI_Init(NULL,NULL);
  // Find out the rank and size
  int world_rank;
  MPI_Comm_rank(MPI_COMM_WORLD,&world_rank); // all the ranks in the MPI comm world is set in world rank 
  int world_size;
  MPI_Comm_size(MPI_COMM_WORLD,&world_size); // all the size in the MPI comm world is set in the world size

  
  
  

  return 0;
}
