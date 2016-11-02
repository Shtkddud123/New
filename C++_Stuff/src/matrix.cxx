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

//namespace crosstriple {
//// cross_product and triple sclar product 
//
//void cross_product(const gsl_vector *u, const gsl_vector *v, gsl_vector *product)
//{
//  double p1 = gsl_vector_get(u, 1)*gsl_vector_get(v, 2)
//    - gsl_vector_get(u, 2)*gsl_vector_get(v, 1);
//
//  double p2 = gsl_vector_get(u, 2)*gsl_vector_get(v, 0)
//    - gsl_vector_get(u, 0)*gsl_vector_get(v, 2);
//
//  double p3 = gsl_vector_get(u, 0)*gsl_vector_get(v, 1)
//    - gsl_vector_get(u, 1)*gsl_vector_get(v, 0);
//
//  gsl_vector_set(product, 0, p1);
//  gsl_vector_set(product, 1, p2);
//  gsl_vector_set(product, 2, p3);
//}
//
//double triple_scalar_product(const gsl_vector *u, const gsl_vector *v, const gsl_vector *w)
//{
//  double result;
//  double tmp[] = {0.0, 0.0, 0.0};
//  gsl_vector_view vxw = gsl_vector_view_array((double *) &tmp, 3);
//
//  cross_product(v, w, &vxw.vector);
//  gsl_blas_ddot(u, &vxw.vector, &result);
//
//  return result;
//}
//
//}
