#include <iostream>
#include <vector>
#include <string>
#include <typeinfo>

#include "Rectangle.hpp"

#include <boost/tuple/tuple.hpp>

using namespace std;
using namespace boost; 

template <class T>
Rectangle<T> duplicate (const Rectangle<T>& param)  {
  Rectangle<T> res;
  res.width = param.width*2; // accessing the private members 
  res.height = param.height*2; // ditto 
  return res; 
}


///
boostTuple::boostTuple() { 
}; // constructor 

boostTuple::~boostTuple() {
}; // destructor 

void boostTuple::allocateintopair() {
  cout << "Please enter the number" << endl;
  // Need to make sure the input value is an interger 
  try {
    
  cin >> gettupleint;
  
  if (typeid(getupleint).name() != "int")
    {
      throw "The input is not an integer";
    }
 
  } catch (const char* msg) {
    cerr << msg << endl;
  }
  
}
void boostTuple::allocateintoquad() {

  cout << "Please enter the string " << endl;
  // Need to make sure the input value is a string
  try {
    cin >> str;  
    if (typeid(str).name() != "string")    {
      // Type of error to throw
      throw "The input is not an string";
    }
  } catch (const char* msg) {
    cerr << msg << endl; 
  }
  
}


