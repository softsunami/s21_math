#include "s21_math.h"

long double s21_pow(double base, double exp) {
  long double result;
  if (S21_IS_INF(base) || S21_IS_INF(exp) == S21_INF) {
    result = S21_INF;
  } else if (S21_IS_NAN(base) || S21_IS_NAN(exp)) {
    result = S21_NAN;
  } else if (base < 0) {
    if (s21_fabs(exp - (int)exp) > S21_EPS10) {
      result = S21_NAN;
    } else {
      base = -base;
      result = s21_exp(exp * s21_log(base));
      if (s21_fmod(exp, 2) != 0) {
        result = -result;
      }
    }
  } else {
    result = s21_exp(exp * s21_log(base));
  }
  return result;
}
