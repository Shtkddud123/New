#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {

  // Initialize the MPI environment
  MPI_Init(NULL,NULL);
 
  // Get the number of processes
  int world_size;
  MPI_Comm_size(MPI_COMM_WORLD, &world_size); // returns the size of the communicator 
  
// Get the rank of the processses
int world_rank;
 MPI_Comm_rank(MPI_COMM_WORLD, &world_rank); // return the rank of the communicator 
 
 
// Get the name of the processor
 char processor_name[MPI_MAX_PROCESSOR_NAME];
int name_len;
 MPI_Get_processor_name(processor_name, &name_len);
 
// print a hello world sitation
 printf("Hello world from processor %s, rank %d out of %d processors \n", processor_name, world_rank, world_size);
 
// Finalize the MPI environment
 MPI_Finalize();
 
 return 0;
}
