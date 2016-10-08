#include <stdio.h>
#include <math.h>
#include <gsl/gsl_poly.h>
#include <gsl/gsl_vector.h>
#include <gsl/gsl_cblas.h>
#include <gsl/gsl_math.h>
#include <vector>
#include <iterator>
#include "vector.hpp"

std::vector<gsl_vector*> a;
std::vector<gsl_vector*>::iterator iter;   

  int lda = 3;

  float A[] = { 0.11, 0.12, 0.13,
		0.21, 0.22, 0.23 };


//  int ldb = 2;
//
//  float B[] = { 1011, 1012,
//		1021, 1022,
//		1031, 1032 };
//
//  int ldc = 2;
//
//  float C[] = { 0.00, 0.00,
//		0.00, 0.00 };
//
//  /* Compute C = A B */
//
//  cblas_sgemm (CblasRowMajor,
//	       CblasNoTrans, CblasNoTrans, 2, 2, 3,
//	       1.0, A, lda, B, ldb, 0.0, C, ldc);
//
//  printf ("[ %g, %g\n", C[0], C[1]);
//  printf ("  %g, %g ]\n", C[2], C[3]);
//  
//  int i;
//  gsl_vector *v = gsl_vector_alloc(3);
//
//  for (int i = 0; i < 3; i++) {
//    gsl_vector_set(v,i,1.23+i);
//  }
//
//  for (int i = 0; i < 100; i++) {
//    //printf("v_%d = %g\n", i, gsl_vector_get (v, i));
//  }
//
//  /* 
//     How to write a vector to a file
//  */
//
//  gsl_vector * b = gsl_vector_alloc(100);
//
//  for (int i = 0; i < 100; i++) {
//    gsl_vector_set(b,i,1.23+i);
//  }
//  
//  {
//  FILE * f = fopen("test.dat", "w");
//  gsl_vector_fprintf(f,b,"%.5g");
//  fclose(f);
//  }
//  gsl_vector_free(b);  
//  gsl_vector_free(v);
//
//  // ------- Reading from data.dat ------//
//
//  gsl_vector * c = gsl_vector_alloc(100);
//
//  {
//    FILE * g = fopen("test.dat", "r");
//    gsl_vector_fscanf(g,c); // open whatever g is pointing to and allocate it to c 
//    fclose(g);
//  }
//  
//  for (int i = 0; i < 100; i++) {
//    printf("%g\n", gsl_vector_get(c,i));
//  }
//
//  gsl_vector * e = gsl_vector_alloc(100);
//  int anotherVector;
//  
//  // Copy vector of e from c 
//  anotherVector = gsl_vector_memcpy(e,c);
//  for (int i = 0; i < 100; i++) {
//    printf("%g\n", gsl_vector_get(e,i));
//  }
//   gsl_vector_free(c);
//
//  
//  // Common operations on vectors such as addition and multiplication are avaliable on the BLAS
//  // part of the library
// 
//  // incoporating vector with the c++ vectors 
//  
//  a.push_back(gsl_vector_alloc(10));
//  	      
//  for (iter = a.begin(); iter != a.end(); iter++) {
//    for (int i = 0; i < 10; i++) {
//      gsl_vector_set((*iter),i,1.23+i);     
//    }
//  }
//  
//  for (iter = a.begin(); iter != a.end(); iter++) {
//    for (int i = 0; i < 100; i++) {
//      printf("v_%d = %g\n", i, gsl_vector_get((*iter), i));
//    }
//  }
//  
//  return 0;
//  
//}
