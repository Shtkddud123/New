#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
// Boost algorithms

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>
#include <boost/tuple/tuple.hpp>

#include "Object.hpp"
#include "Map.hpp"
#include "Geo.hpp"
#include "StringVector.hpp"

using namespace std;

MCalg::MCalg() {
}

MCalg::MCalg(int a) {
  num = a; // Number of hits for Pi 
}

double MCalg::randist() {
  std::uniform_real_distribution<double> unif(-1,1);
  std::default_random_engine re;
  // boost::random::mt19937 randgen;
  // boost::random::uniform_int_distribution<> dist(-1, 1);
  return unif(re);
}

void MCalg::direct_pi() {

  for (int i = 0; i < num; i++) {
    
    x = MCalg::randist(); 
    y = MCalg::randist();

    std::cout << x << std::endl;
    std::cout << y << std::endl;
    
    if ( ((x*x) + (y*y)) < 1 ) {
      N_hits = N_hits + 1;
    }

  }

}

void MCalg::print_pi() {
  std::cout << N_hits << std::endl;
}

void MCalg::print_xy() {
  std::cout << x << std::endl;
  std::cout << y << std::endl;
}

MCalg MCalg::operator+(MCalg aso) { // a sallyo object 

  MCalg brandNew;

  // new sally object num is this->num + aso.nu,

  brandNew.num = this->num + aso.num;

  return(brandNew); // returns the brandnew sally object 

}

mapexample::mapexample() {}
mapexample::~mapexample() {}
void mapexample::addtomap(char a, int b) {
  mymap[a] = b;
}

void mapexample::printmap() {
  for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it) {
    cout << it->first << " => " << it->second << '\n';
  }
}


