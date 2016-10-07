#include "Spreadsheet1.h"
#include "Spreadsheet2.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

People::People()
  : name(x), dateofBirth(bo)
// Care - we need to use a member initializer
// Need to use whenever we use a class inside a class
{
};

void People::printInfo() {
  cout << name << "was born on";
  // has access to the birthday functions
  dateOfBirth.printDate();
};
