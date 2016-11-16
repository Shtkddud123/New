#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include <cmath>
#include <cstdio>
#include <ctime>
#include <cstdlib>

#include "Object.hpp"
#include "Map.hpp"
#include "Geo.hpp"
#include "StringVector.hpp"
#include "CustomSet.hpp"
#include "CustomBessel.hpp"
#include "Rectangle.hpp"
#include "quadratic.hpp"
#include "constructor.hpp"

// --- GSL libraries --- //
#include "gsl.hpp"
#include "gslmat.hpp"


// --- Boost libraries --- //
#include <boost/array.hpp>
#include <boost/numeric/odeint.hpp>
#include <boost/math/distributions.hpp>

// --- Algorithms libraries --- //

#include "sedgewickalg.hpp"

using namespace std;
using namespace boost::numeric::odeint;
  
  /* The type of container used to hold the state vector */
  typedef std::vector<double> state_type;

  const double gam = 0.15;

  /* The rhs of x' = f(x) */
  void harmonic_oscillator( const state_type &x , state_type &dxdt , const double /* t */ )
  {
    dxdt[0] = x[1];
    dxdt[1] = -x[0] - gam*x[1];
  }

  //[ rhs_class
  /* The rhs of x' = f(x) defined as a class */
  class harm_osc {
    double m_gam;
  public:
    harm_osc( double gam ) : m_gam(gam) { }
    void operator() ( const state_type &x , state_type &dxdt , const double /* t */ )
    {
      dxdt[0] = x[1];
      dxdt[1] = -x[0] - m_gam*x[1];
    }
  };

#ifndef TEST_CLASS_A
#define TEST_CLASS_A

class A
{
private:
  double myValue_;

public:
  A(const double& myValue):myValue_(myValue){
    cout << "Constructor of A" << endl;
  }
  ~A() {
    cout << "Destructor of A with value " << myValue_ << endl;
    
  }
  double getValue() const {return myValue_};
};

#endif 

int main(int argc, char *argv[]) {



  boost::math::normal_distribution<> d(0.5,1);
  
  MCalg a(3000);

  a.direct_pi();
  a.print_pi();
  a.print_xy();

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
  
  mapexample mymap;
  mymap.addtomap('a',3);
  mymap.addtomap('b',3);
  mymap.addtomap('c',3);
  mymap.addtomap('d',3);
  mymap.addtomap('e',3);
  mymap.printmap();

  
// template <class T>
//   T median(vector<T> v) {
//   typedef typename vector<T>::size_type vec_sz;
//   vec_sz size = v.size();
//
//   if (size == 0)
//     throw domain_error("median of an empty vector");
//   sort(v.begin, v.end());
//   
//   vec_sz mid = size/2;
//   return size % 2 == 0 ? (v[mid] + v[mid-1]) /2 : v[mid];
//      
// }

  

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
  
  // boost array 
  typedef boost::array<std::string, 3> array;
  array ARR;
  
  gsl_matrix A;
  initiateMatrix firstMatrix(&A,3,10);  

  flips aA(1000000);
  aA.printFlips();
  aA.printDiff();  
  
  return 0;
    
}
