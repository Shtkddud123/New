#include "gslmat.hpp"
#include "gsl.hpp"

initiateMatrix::initiateMatrix(gsl_matrix * m, int i, int j) {
  m = gsl_matrix_alloc(i,j);  
  M = m;
  ii = i;
  jj = j;
}

initiateMatrix::~initiateMatrix() {
  gsl_matrix_free(M);
}

void initiateMatrix::set_matrix() {
  for (int i = 0; i < ii; ++i)
    for (int j = 0; j < jj; ++j)
      gsl_matrix_set(M, i, j, 0.23 + 100*i + j);
}

