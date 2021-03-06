#include <boost/array.hpp>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

struct ODEvector {
  int a;
  std::vector<int> b;
};

typedef struct ODEvector structVectors;

typedef boost::array<char,4> array4_t; // Simply a wrapper around a array of four character elements 
typedef boost::array<structVectors,4> array4_vector; 

std::vector<array4_vector>::iterator iter_struct;

array4_t& vector_advance (array4_t& val);

int main (int argv, char **argc) {

  structVectors aa;
  array4_vector bb;
  aa.a = 3;
  aa.b.push_back(3);

  bb[1] = aa;

  std::cout << bb[1].a << std::endl; 
 
  return 0;
}

