#pragma once
#include <vector>
#include <map>
#include <iostream>

using namespace std;
namespace geo {
class Box {
  
 public:
  // Constructor definition
  Box(double l = 2.0, double b = 2.0, double h =2.0) {
    cout << "Constructor called" << endl;
    length = l;
    breadth = b;
    height = h;
  }

  double Volume() {
    return length*breadth*height;
  }

  int compare(Box box) {
    return this->Volume() > box.Volume();
  }

 private:
  double length;
  double breadth;
  double height;
};
}
