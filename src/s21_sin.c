#include "s21_math.h"

long double s21_sin(double x) {
  long double result;
  if (S21_IS_INF(x) || S21_IS_NAN(x)) {
    result = S21_NAN;
  } else {
    if (x > 0) {
      while (x >= S21_PI) {
        x = x - 2 * S21_PI;
      }
    } else {
      while (-x >= S21_PI) {
        x = x + 2 * S21_PI;
      }
    }
    int sign = 1;
    long double expression;
    result = (long double)x;
    for (int i = 3; i < 20; i += 2) {
      expression = s21_pow(x, i) / ((long double)s21_factorial(i));
      if (sign == 1) expression = -expression;
      result = result + expression;
      sign = -sign;
    }
  }
  return result;
}
