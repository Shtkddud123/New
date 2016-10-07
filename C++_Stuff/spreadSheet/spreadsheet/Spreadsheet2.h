#ifndef __PEOPLE__
#define __PEOPLE__
#include "Spreadsheet1.h"
#include <string>

using namespace std;

class People {
  // include birthdays as every person has a birthday 
 public:
  People(string x, Birthday bo); // bo = birthday object
  void printInfo();
 private:
  string name;
  // now use a birthday object
  Birthday dateOfBirth;
  
};

#endif 
