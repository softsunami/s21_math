#ifndef MATH_S21_MATH_H
#define MATH_S21_MATH_H

#define S21_NAN __builtin_nanf("")
#define S21_IS_NAN(x) __builtin_isnan(x)

#define S21_INF __builtin_huge_valf()
#define S21_IS_INF(x) __builtin_isinf_sign(x)

#define S21_mINF -__builtin_huge_valf()
#define S21_IS_mINF(x) -__builtin_isinf_sign(x)

#define S21_EPS6 0.0000001
#define S21_EPS8 0.000000001
#define S21_EPS10 0.0000000001

#define S21_PI 3.14159265358
#define S21_EXP 2.71828182846
#define MAX_LONG_DOUBLE 1.79769313486231571e+308
#define S21_M_LN10 2.30258509299404568402

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_exp(double x);
long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_sqrt(double x);
long double s21_fmod(double x, double y);
long double s21_floor(double x);
long double s21_ceil(double x);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);
long double s21_atan(double x);
long double s21_acos(double x);
long double s21_asin(double x);
long long int s21_factorial(int x);

#endif  // MATH_S21_MATH_H
