#include "sedgewickalg.hpp"
#include <gsl/gsl_cdf.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>

#include <cstdio>
#include <iostream>
#include <array>
#include <functional> // 
#include <numeric> // accumulate is here 

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

  for (unsigned int i = 0; i < n; i++)
    {
      unsigned int k = gsl_ran_bernoulli(r, mu);
      printf (" %u", k);
    }
  
}


