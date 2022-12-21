#include "s21_math.h"

long double s21_atan(double x) {
  long double atan = s21_asin((x) / (s21_sqrt(1 + x * x)));
  return atan;
}