#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

// Boost algorithms

#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>

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

int MCalg::randist() {
  boost::random::mt19937 randgen;
  boost::random::uniform_int_distribution<> dist(-1, 1);
 return dist(randgen);
}

void MCalg::direct_pi() {

  for (int i = 0; i < num; i++) {
    
    int x = MCalg::randist(); 
    int y = MCalg::randist();

    if ( ((x*x) + (y*y)) < 1 ) {
      N_hits = N_hits + 1;
    }
  }
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
