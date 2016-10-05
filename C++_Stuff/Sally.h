#pragma once
#include <vector>
#include <map>
using namespace std;

class Sally {

 public:
  int num;
  Sally();
  Sally(int);
  //
  Sally operator+(Sally); 
};

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

// -----------------------------------------------------
template <class T>
class StringVector {
 public:
  void addnew(vector<T>);
  void print(); 
 private:
  vector<T> closet;
};

template <class T>
void StringVector<T>::addnew(vector<T> a) {
  closet = a;
}

template <class T>
void StringVector<T>::print() {
  for (typename vector<T>::iterator it = closet.begin() ; it != closet.end(); ++it) {
    cout << *it << endl;
  }
}
// -----------------------------------------------------

class mapexample {
 public:
  mapexample();
  ~mapexample();
  void addtomap(char, int);
  void printmap();
 private:
  map<char,int> mymap;
};

