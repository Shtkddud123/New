#ifndef __SPREAD__
#define __SPREAD__
#include <string>
#include <vector>
#include <map>
#include <iostream>

#include <memory>

// SpreadsheetCell.h
/*
Stores both text and numerical representations of the data
 */
using std::string;
using std::vector;
using std::map;
using std::cout;
using std::endl;

class SpreadsheetCell 
{
   // method that are avaliable to everyone 
 public: 
  SpreadsheetCell();
  SpreadsheetCell(double initialValue);
  SpreadsheetCell(string initialValue);


  ~SpreadsheetCell();
  void setValue (double inValue); 
  double getValue(); 
  void setString(string inString);
  string getString();
  
 protected:
  double stringToDouble(string inString);
  double mValue;
  string mString;
  string doubleToString(double inValue);

 private: 
  double dd;
  string ss;
};

// public - any code can call a public method 
// or access a public member of an object 

// protected - Any method of the class can call a 
// protected method and access a protected member 

// access to protected data outside the instance of the object
// is not allowed. 




// Only methods of the class can call a private method 
// and access a private member 

// Methods in the subclasses cannot access private methods or 
// members 

// -- Separate animal class to check inheritance 

class Animal {
  // public functions that can be accessed from anywhere 
 public:
  Animal(); // default constructor 
  ~Animal(); // default destructor 
  void eat();
  void sleep(); 
  void drink();
  
 private: // only methods of the clas can call a private method and acces a private member 
  int legs;
  int arms;
  int age; 
};

/*
The class Animal contains information and functions 
related to all animals (at least, all animals this lesson uses) 
 */
class Cat: public Animal 
{
 public:
  int fur_colour;
  void purr();
  void fish();
  void markTerritory(); 
};


class mapString {

 public:
  mapString(); // constructor 
  ~mapString(); // destructor 
  void readin(); // Function to cin a sentence - I dont return anythi
  void addtoMap(); 
  // map functions 
  //ng, so I don't need to specifiy a string/int/char at the beginning of the function 
 private:
  string s;
  map <string, int> counters; // store each word and an associated counter
  map <int, vector<string> > words_by_freq;
};

class printData {
 public:
  printData(); // constructor 
  ~printData(); // destructor  
  void print(int i) {
    cout << "Printing int: " <<  i << endl;
  } // print out an integer

  void print(double f) {
    cout << "Printing float: " << f << endl;
  } // print out a double 

  void print(char* c) {
    cout << "Printing character: " << c << endl; 
  } // print out a character 
};

/*
Redefining operators

Overloaded operators are functions with special names 
the keyword operator followed by the symbol for the operator 
being defined

 */

// new class box that demonstrates it 

class Box {
 public:
   Box();
  ~Box();
  double getVolume(void) {
    return length * breadth * height;
  } // return volume
  void setLength( double len ) {
    length = len;
  } // set length 
  void setBreadth ( double bre ) {
    breadth  = bre; 
  } // set breadth 
  void setHeight ( double hei ) {
    height = hei; 
  } // set height 

  // overload + operator to add two box objects
  Box operator+(const Box& b) // make new addition function that 
    // works with the current parameters and another box object b 
  {
  Box box;
  box.length = this->length + b.length;
  box.breadth = this->breadth + b.breadth;
  box.height = this->height + b.height;
  }
 private:
  double length;
  double breadth;
  double height;
};





/* Templating */

void PrintTwice (int data) {
cout << "Twice is " << data * 2 << endl;
}
// generic function
template<class TYPE>
void PrintTwice (TYPE data) {
  cout << "Twice: " << data * 2 << endl;
}

template<class TYPE> 
TYPE TWICE(TYPE data) {
  return data * 2;
}

template<class T>
T Add(T n1, T n2) {
  T result;
  result = n1 + n2; 
  return result;
}

/*
Bit on virtual methods 
 */

/* ----------------*/


/*
One of the key features of class inheritance is that a pointer 
to a derived class is a type-compatible with a pointer to it's base class


 */

class Polygon {
 protected:
  int width, height; // integers used inside the class instance
 public:
  void set_values (int a, int b) {
    width = a;
    height = b;
  }
  virtual int area() { // This function can now be redefined in other classes that is derived from this 
    return 0;
  }
  
};

// inheritance as well

class Rectangle: public Polygon { // inheriting from Polygon
 public:
  int area() {
    return width*height;
  }
};

class Triangle: public Polygon {
 public:
  int area() {
    return width*height/2;
  }
};

/* ---------------------*/

#endif 
