#ifndef __EXAMPLES_LIBGSL_QUADRATIC_H__
#define __EXAMPLES_LIBGSL_QUADRATIC_H__

struct quadratic_params {
  double a, b, c;
};

/* Returns the value of the quadratic at x */
double quadratic(double x, void *params);

/* Returns the derivative of the quadratic at x */
double quadratic_deriv(double x, void *params);

/* Returns the derivative of the quadratic at x */
double quadratic_deriv(double x, void *params);

#endif /* !defined __EXAMPLES_LIBGSL_QUADRATIC_H__ */
