#include "complex_numbers.h"
#include <math.h>

complex_t c_add(complex_t a, complex_t b) {
  complex_t z;
  double _a = a.real;
  double _b = a.imag;
  double _c = b.real;
  double _d = b.imag;

  z.real = (_a + _c);
  z.imag = (_b + _d);

  return z;
}

complex_t c_sub(complex_t a, complex_t b) {
  complex_t z;
  double _a = a.real;
  double _b = a.imag;
  double _c = b.real;
  double _d = b.imag;

  z.real = (_a - _c);
  z.imag = (_b - _d);

  return z;
}

complex_t c_mul(complex_t a, complex_t b) {
  complex_t z;
  double _a = a.real;
  double _b = a.imag;
  double _c = b.real;
  double _d = b.imag;

  z.real = (_a * _c - _b * _d);
  z.imag = (_b * _c + _a * _d);

  return z;
}

complex_t c_div(complex_t a, complex_t b) {
  complex_t z;
  double _a = a.real;
  double _b = a.imag;
  double _c = b.real;
  double _d = b.imag;

  z.real = (_a * _c + _b * _d) / (_c * _c + _d * _d);
  z.imag = (_b * _c - _a * _d) / (_c * _c + _d * _d);

  return z;
}

double c_abs(complex_t x) { return sqrt(x.real * x.real + x.imag * x.imag); }

complex_t c_conjugate(complex_t x) {
  double _a = x.real;
  double _b = x.imag;
  complex_t z;
  z.real = _a;
  z.imag = -_b;
  return z;
}

double c_real(complex_t x) { return x.real; }

double c_imag(complex_t x) { return x.imag; }

complex_t c_exp(complex_t x) {
  complex_t z;
  double _a = x.real;
  double _b = x.imag;

  z.real = exp(_a) * cos(_b);
  z.imag = exp(_a) * sin(_b);

  return z;
}
