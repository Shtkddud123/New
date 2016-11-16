#pragma once

#include <iostream>
#include <cassert>
#include <boost/tuple/tuple.hpp>
#include <string>

using namespace std;
using namespace boost; 

class boostTuple {

public:
  boostTuple(); // Constructor 
  ~boostTuple(); // Destructor 
  void allocateintopair;
  void allocateintoquad;
  void maketuple;
  
private:  
  boost::tuple<int, std::string> pairtuple;
  boost::tuple<int, float, double, int> quad;
  int gettupleint;
  const string& str;
  
};



template <class T>
class Rectangle {
protected:
  T width, height;
public:
  void set_values (T a, T b) {
    width = a;
    height = b;
  }
  Rectangle() {} // constructor 
  Rectangle(T x, T y) : width(x), height(y) {}; // automatucally assign x to width, and y to height
  
  T area() {return width * height;}

  template<class S>
  friend Rectangle<S> duplicate (const Rectangle<S>&); // defining friend class that has access to the 
};



/* Inheritance  */
template <class T>
class square : public Rectangle<T> {
 public:
  T aarea() {    
    return this->width * this->height;
  }
};

enum class Suit {Diamonds, Hearts, Clubs, Spades};
void PlayCard (Suit suit) {
  switch(suit) {
  case Suit::Diamonds : cout << "Diamonds \n"; break;
  case Suit::Hearts : cout << "Hearts \n"; break;
  case Suit::Clubs : cout << "Clubs \n"; break;
  case Suit::Spades : cout << "Spades \n"; break;	  
  }
}

class FriendF {
public:  
  // constructor
  FriendF(){FriendVar = 0;}
  ~FriendF();
private:
  int FriendVar;
  friend void FFriend(FriendF &sfo); // stinkfirstobject = sfo 
}; 

void FFriend(FriendF &sfo) {
  sfo.FriendVar = 99;
  cout << sfo.FriendVar << endl;}

FriendF::~FriendF() {
};

