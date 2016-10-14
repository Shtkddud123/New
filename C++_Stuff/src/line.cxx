#include <iostream>
#include <cmath>
#include <typeinfo>
#include <string>
#include <vector>
#include "line.hpp"

Line::Line() {
  std::cout << "Object is being created" << std::endl;
}

void Line::setLength(double len) {
  length = len;
}

double Line::getLength(void) {
  return length;
}
