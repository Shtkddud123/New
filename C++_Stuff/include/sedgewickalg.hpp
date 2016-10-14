#ifndef __ALG__
#define __ALG__

#include <gsl/gsl_cdf.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include <cstdio>

class flips {
public:

  flips(int); // constructor flips
  ~flips(); // destructor flips
  void printFlips();  
  void printDiff();

private:
  int TT;
  const gsl_rng_type * T;
  gsl_rng * r;
  int i, n;
  double mu;
  int heads;
  int tails;
  int difference; 
};

class Whitelist  {

public:

  
private:

};

#endif 
