#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
// Manual headers 
#include "alg1.hpp"
#include "geo.hpp"
#include "maps.hpp"
#include "stringvector.hpp"

using namespace std;

Alg1::Alg1() {
}

Alg1::Alg1(int a) {
  num = a;
}

Alg1 Alg1::operator+(Alg1 aso) { // a sallyo object

  Alg1 brandNew;
  // new sally object num is this->num + aso.nu,

  brandNew.num =  this->num + aso.num;
  return(brandNew); // returns the brandnew sally object
}

mapexample::mapexample() {} // Constructor
mapexample::~mapexample() {} // Destructor

void mapexample::addtomap(char a, int b) {
  mymap[a] = b;
}

void mapexample::printmap() {

  for (map<char,int>::iterator it=mymap.begin(); it!=mymap.end(); ++it) {

    cout << it->first << " => " << it->second << '\n';

  }

}
