#include <iostream>
#include <vector>
#include "Rectangle.hpp"

using namespace std;

// Every class can have friends
// now creating a separate friend function that has access to the ariables inside the class


template <class T>
Rectangle<T> duplicate (const Rectangle<T>& param)  {
  Rectangle<T> res;
  res.width = param.width*2; // accessing the private members 
  res.height = param.height*2; // ditto 
  return res; 
}

//struct B {};
//struct D : B {};

//enum class E {ONE, TWO, THREE};
//enum EU { ONE, TWO, THREE};

