#include "s21_math.h"

long double s21_ceil(double x) {
  long double result;
  if (S21_IS_INF(x)) {
    result = S21_INF;
  } else if (S21_IS_NAN(x)) {
    result = S21_NAN;
  } else if (S21_IS_mINF(x)) {
    result = S21_mINF;
  } else {
    result = (long long int)x;
    if (s21_fabs(x - (double)result) > 0 && x > 0) {
      result += 1;
    }
  }
  return result;
}
