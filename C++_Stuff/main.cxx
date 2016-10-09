#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <cstdio>

// --- Custom C++ header files --- //

#include "Object.hpp"
#include "Map.hpp"
#include "Geo.hpp"
#include "StringVector.hpp"
#include "CustomSet.hpp"
#include "CustomBessel.hpp"
#include "Rectangle.hpp"
#include "quadratic.hpp"

// --- GSL libraries --- //

#include "gsl.hpp"
#include "boostlib.hpp"

using namespace std;
using namespace boost::numeric::odeint;


int main(int argc, char *argv[]) {
  
  StankFist aa;  
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
  
  int i;
  double coef[128], sol[128];
  gsl_complex csol[128];
  
  
  /* (1) 3 * x - 2 = 0 */
  gsl_poly_solve_quadratic(0.0, 3.0, -2.0, &sol[0], NULL);
  printf("x = %g\n", sol[0]);
  
  /* (2) 2 * x^2 - 3 * x - 5 = 0 */
  gsl_poly_solve_quadratic(9.0, +6.0, 1.0, &sol[0], &sol[1]);
  printf("x1, x2 = %g, %g\n", sol[0], sol[1]);
  
  /* (3) 3 * x^2 - 5 * x + 9 = 0 */
  gsl_poly_complex_solve_quadratic(3.0, -5.0, 9.0, &csol[0], &csol[1]);
  printf("re(x1), im(x1) = %g, %g\n", GSL_REAL(csol[0]), GSL_IMAG(csol[0]));
  printf("re(x2), im(x2) = %g, %g\n", GSL_REAL(csol[1]), GSL_IMAG(csol[1]));
  
  /* Solve Cubic Equation */
  printf("\nSolve Monic Cubic Equation\n");
  
  /* x^3 + 2 * x^2 + 3 * x + 4 = 0 */
  gsl_poly_complex_solve_cubic(2.0, 3.0, 4.0, &csol[0], &csol[1], &csol[2]);

  for(i = 0; i < 3; i++)
    printf("re(x%d), im(x%d) = %g, %g\n", i, i, GSL_REAL(csol[i]), GSL_IMAG(csol[i]));
    
  
  return 0;
    
}
