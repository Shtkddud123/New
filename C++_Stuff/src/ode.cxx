// Boost libraries
#include <boost/array.hpp>
#include <boost/tuple/tuple.hpp>
#include <boost/numeric/odeint.hpp>
#include <boost/math/distributions.hpp>


#include <vector>
#include <set>
#include <cassert>
#include <functional> // unary operators 

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

using namespace boost;

boost::tuple<int, std::string> almost_a_pair(10,"Hello");
boost::tuple<int, float, double, int> quad(10,1.0f,10.0,1);

int i = boost::get<0>(almost_a_pair); // get the first element integer of the tuple
const std::string& str = boost::get<1>(almost_a_pair); // get the second element of the tuple
double d = boost::get<2>(quad);

std::set<tuple<int, double, int> > s;
s.insert(make_tuple(1,1.0,2));
s.insert(make_tuple(2,1.0,2));
s.insert(make_tuple(3,100.0,2));

// requires C++11 
auto t = make_tuple(0, -1.0, 2);
assert(2 == get<2>(t)); // using cassert to check the values are correct

// Reordering the parameters of function
class Number{};
inline Number operator+ (Number, Number);



