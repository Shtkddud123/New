#include "sedgewickalg.hpp"
#include <gsl/gsl_cdf.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

#include <cstdio>
#include <iostream>
#include <array>
#include <functional> // 
#include <numeric> // accumulate is here 
#include <vector>

flips::flips(int a) {
  TT = a; 
} // constructor

flips::~flips() {
  gsl_rng_free (r);
} // destructor 

void flips::printFlips() {

  i, n = TT;
  mu = 0.5;
  /* create a generator chosen by the 
     environment variable GSL_RNG_TYPE */
  gsl_rng_env_setup();

  T = gsl_rng_default;
  r = gsl_rng_alloc (T);

  /* print n random variates chosen from 
     the bernoulli distribution with mean 
     parameter mu */
  // Initialize the heads and tails value   
  heads = 0;
  tails = 0;

  for (unsigned int i = 0; i < n; i++)
    {
      unsigned int k = gsl_ran_bernoulli(r, mu);     

      if (k == 1) { 
	heads +=1;
      }
      else {
	tails +=1;
      }      
      // printf (" %u \n", k);
    }  
}

void flips::printDiff() {
  std::cout << "The number of heads is " << heads << "\n";
  std::cout << "The number of tails is " << tails << "\n";  
}
