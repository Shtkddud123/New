#pragma once
#include <vector>
#include <iostream>

using namespace std; // This is a old format and needs to be removed later 

template <class T>
class StringVector {
 public:
  void addNew(vector<T>); // Input is a vector of type T
  void print();  // pint 
 private:
  vector<T> privateVector;
};

template <class T>
void StringVector<T>::addNew(vector<T> a) { // Intializing the method addnew()
  privateVector = a;
}

template <class T>
void StringVector<T>::print() { // print out the content of the vector 
  for (typename vector<T>::iterator it = privateVector.begin() ; it != privateVector.end(); ++it) {
    cout << *it << endl;
  }
}

