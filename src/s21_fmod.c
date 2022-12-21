#include "s21_math.h"

long double s21_fmod(double x, double y) {
  long double res = x;
  int flag_minus = 0;
  if (res < 0) {
    flag_minus = 1;
    res = s21_fabs(res);
  }
  if (y == 0) {
    res = S21_INF;
  } else {
    if (res != y) {
      while (s21_fabs(res) >= s21_fabs(y)) res = s21_fabs(res) - s21_fabs(y);
    } else {
      res = 0.0;
    }
  }
  return (flag_minus) ? -res : res;
}
