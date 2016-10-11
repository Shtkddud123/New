#ifndef __GSLMAT__
#define __GSLMAT__

#include <iostream>
#include <vector>
#include "gsl.hpp"

class initiateMatrix {
public:

  initiateMatrix(); // constructor
  initiateMatrix(gsl_matrix * m, int i, int j); // constructor
  gsl_matrix * M;
  int ii;
  int jj;
  void set_matrix();
  ~initiateMatrix(); // destructor 
};


class Polygon {

};


#endif
