#include "s21_math.h"

long double s21_cos(double x) {
  int n = 1;
  double cos = 1, t = 1;
  while (!(t >= -0.0000000001 && t <= 0.000000001)) {
    t = (-t) * (x * x) / ((2 * n - 1) * (2 * n));
    cos = cos + t;
    n++;
  }
  return cos;
}
