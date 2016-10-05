#include <iostream>
#include "Sally.h"
#include <vector>
#include <algorithm>
#include <map>


using namespace std;

Sally::Sally() {
}

Sally::Sally(int a) {
  num = a; 
}

Sally Sally::operator+(Sally aso) { // a sallyo object 
  Sally brandNew;
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
