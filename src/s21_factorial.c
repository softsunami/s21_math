#include "s21_math.h"

long long int s21_factorial(int x) {
  long long int result = 1;
  if (x < 0)
    result = 0;
  else if (x > 25)
    x = 25;
  for (int i = 1; i <= x; i++) {
    result *= i;
  }
  return result;
}
