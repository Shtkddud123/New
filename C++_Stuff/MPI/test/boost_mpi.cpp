// The boost libraries 
#include <boost/lambda/lambda.hpp>
#include <boost/variant.hpp>
#include <iostream>
#include <iterator>
#include <algorithm>
// MPI library parts 
#include <mpi.h>
#include <stdio.h>

int main (int argc, char **argv) {
  // Initialize the MPI environment
  MPI_Init(NULL,NULL);

  // Get the number of processes
  int world_size;
  MPI_Comm_size(MPI_COMM_WORLD, &world_size);

  // Get the rank of the process
  int world_rank;
  MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

  char processor_name[MPI_MAX_PROCESSOR_NAME];
  int name_len;
  MPI_Get_processor_name(processor_name, &name_len);

  printf("Hello world from processor %s, rank %d"
	 " out of %d processors\n", processor_name, world_rank, world_size);

  MPI_Finalize();

  typedef boost::variant<int, const char*, std::string> my_var_t; // 
  std::vector<my_var_t> some_values; 
  
  some_values.push_back(10);
  some_values.push_back("Hello There!");
  some_values.push_back(std::string("Wow "));
  std::string& s = boost::get<std::string>(some_values.back());

  s += "That is great! \n";
  std::cout << s;

  
  return 0;
}
