#include "s21_math.h"

long double s21_asin(double x) {
  double asin = x, t = x;
  int n = 1;
  if (x > 1 || x < -1) return S21_NAN;
  if (x == 1) {
    asin = S21_PI / 2;
  } else if (x == -1) {
    asin = -S21_PI / 2;
  } else {
    while (!(t >= -S21_EPS10 && t <= S21_EPS10)) {
      t = ((t) * (x * x) * (2 * n - 1) * (2 * n - 1)) / ((2 * n + 1) * (2 * n));
      asin = asin + t;
      n++;
    }
  }
  return asin;
}
