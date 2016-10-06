#include "alg1.hpp"
#include "stringvector.hpp"
#include "maps.hpp"
#include "geo.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace geo;
//using namespace geo;

int main(int argc, char *argv[]){
  /*
    Operator overloading 
  */

  Alg1 a(30);
  Alg1 b(40);

  Alg1 c;
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
  
  bb.addNew(aRandomVector); // adding new vector

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
  return 0;
}
