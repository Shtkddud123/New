#pragma once
#include <map>

class mapexample {
 public:
  mapexample();
  ~mapexample();
  void addtomap(char, int);
  void printmap();
 private:
  map<char,int> mymap;
};

