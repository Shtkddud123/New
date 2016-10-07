#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <stdexcept> 
#include <functional>
// basics/max.hpp

/*
This template definition specifies 
a family of functions that returns 

 o*/
template <typename T> // template <comma separated list of paaameters)
inline T const& max (T const& a, T const& b) {

  // if a < b use b else use a
  return a<b?b:a;

}

template <class T> // template of a class of type T 
class Stack {
 private:
  vector<T> elems;

 public:
  void push(T const&); // push element
  void pop(); // pop element
  T top() const; // return top element
  bool empty() const {
    return elems.empty();
  }
  
};


template <class T>  // template of class type T
class mew {
 public:
  void print(T const&);
};

template <class T>
class ex18 {
 public:
  typedef T (*compare_cb) (T a, T b);
};


// C++ composition 

class Birthday {
 public:
  Birthday(int d, int m, int y); // constructor
  void printDate();
 private:
  int day;
  int month;
  int year;  
}; 

