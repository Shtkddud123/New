#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

#include "Object.hpp"
#include "Map.hpp"
#include "Geo.hpp"
#include "StringVector.hpp"

using namespace std;

alg1::alg1() {
}

alg1::alg1(int a) {
  num = a; 
}

alg1 alg1::operator+(alg1 aso) { // a sallyo object 
  alg1 brandNew;
  // new sally object num is this->num + aso.nu,
  brandNew.num =  this->num + aso.num;
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
