#pragma once
#include <vector>
#include <map>
using namespace std;

class mapexample {
 public:
  mapexample();
  ~mapexample();
  void addtomap(char, int);
  void printmap();
 private:
  map<char,int> mymap;
};

