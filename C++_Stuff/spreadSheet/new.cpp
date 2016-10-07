#include <iostream>
#include <stdexcept>
#include <string>

void add(double &a) { // reference - takes whatever the double that has been pointed and changes it's value fundamentally 
  a = a + 2;
}

using namespace std; 

int main(int argc, char *argv[]) {

  double d = 3;

  add(d);

  cout << d << endl;

  return 0;
}
