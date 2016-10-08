#pragma once
#include <vector>
#include <map>
#include <gsl/gsl_poly.h>

using namespace std;

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
