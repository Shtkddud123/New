#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <math.h>
#include <stdio.h>
// --- Custom C++ header files --- //

#include "Object.hpp"
#include "Map.hpp"
#include "Geo.hpp"
#include "StringVector.hpp"
#include "CustomSet.hpp"
#include "CustomBessel.hpp"

// --- GSL libraries --- //

#include "quadratic.hpp"
#include <gsl/gsl_math.h>
#include <gsl/gsl_deriv.h>
#include <gsl/gsl_cblas.h>
#include <gsl/gsl_complex.h>
#include <gsl/gsl_poly.h>

using namespace std;

int main(int argc, char *argv[]){

  /*
    Operator overloading 
  */

  alg1 a(30);
  alg1 b(40);

  alg1 c;
  c = a +b;
  std::cout << c.num << std::endl;

  Box Box1(2.2,1.2,1.5);
  Box Box2(8.5,6.0,2.0);

  if (Box1.compare(Box2)) {
    std::cout << "Box2 is smaller than Box1" << endl; 
  }

  std::vector<int> aRandomVector;
  aRandomVector.push_back(1);
  aRandomVector.push_back(2);
  aRandomVector.push_back(3);
  std::cout << "dfdf" << endl;
  StringVector<int> bb;
  
  bb.addnew(aRandomVector); // adding new vector

  bb.print();

  // ------------------------- //
  // map lower bound example
  /*
  std::map<char,int> mymap;
  std::map<char,int>::iterator itlow, itup;

  mymap['a'] = 20;
  mymap['b'] = 20;
  mymap['c'] = 20;
  mymap['d'] = 20;
  mymap['e'] = 20;
  */
  
  mapexample mymap;
  mymap.addtomap('a',3);
  mymap.addtomap('b',3);
  mymap.addtomap('c',3);
  mymap.addtomap('d',3);
  mymap.addtomap('e',3);
  mymap.printmap();

  // The set defines the beseel function of first and second types ..  
  //  customSet::SET<int> besselFunctions(myints, myints+5);
  
  gsl_function F;
  struct quadratic_params params = { 1.0, 0.0, -5.0 };
  F.function = &quadratic;
  F.params = &params;
  
  // solving 9x^2 + 6x + 1 
  gsl_function FF;
  struct quadratic_params newparams = { 9.0, 6.0, 1.0 };
  FF.function = &quadratic;
  FF.params = &newparams;

  int num;
  double sol[128];
  nums = gsl_poly_solve_quadratic(9.0, 6.0, 1.0, &sol[0], &sol[1]);
  
  return 0;
    
}
