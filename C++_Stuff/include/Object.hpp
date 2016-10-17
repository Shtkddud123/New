#pragma once
#include <vector>
#include <map>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_int_distribution.hpp>

/*
We use the __mt19937 with the default seed as a source of 
randomness. The numbers produced will be the same 
every time the program is run. 

One common method to change this is to seed the current time 
 */

using namespace std;

class MCalg {
public:
  MCalg();
  MCalg(int);
  //~MCalg();
  
  MCalg operator+(MCalg); 
  int randist();
  void direct_pi();
 
private:
  int num;
  int N_hits = 0;
};
