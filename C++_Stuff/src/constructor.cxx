#include <iostream>
#include <cmath>
#include <typeinfo>
#include <string>
#include <vector>
#include "constructor.hpp"

using namespace std;

// Member function definitions here 
Line::Line(void) {
  cout << "Object is being created" << endl;
}

void Line::setLength(double len) {
  length = len;
}

double Line::getLength(void) {
  return length;
}

template<class T, class U>
auto hello<T, U>::add(T t, U u) -> decltype(t + u) {
  return t + u;
}

template<class T, class U>
auto hello<T, U>::get_fun(int arg) -> double (*)(double) {
  switch (arg)
    {
    case 1: return fabs;
    case 2: return sin;
    default: return cos;
    }
}



