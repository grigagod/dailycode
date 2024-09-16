#include <assert.h>
#include <stdio.h>

unsigned pow_mod(unsigned n, unsigned k, unsigned m) {
  unsigned mul = n % m;
  unsigned prod = 1;
  while (k > 0) {
    if (k % 2 == 1) {
      prod = (prod * mul) % m;
      k = k - 1;
    }
    mul = (mul * mul) % m;
    k = k / 2;
  }
  return prod;
}

unsigned spow_mod(unsigned a, unsigned b, unsigned n) {
  unsigned pow = a % n;
  unsigned acc = 1;
  while (b > 0) {
    if (b % 2 == 1) {
      acc = pow_mod(acc, pow, n);
      b = b - 1;
    }
    pow = pow_mod(pow, pow, n);
    b = b / 2;
  }
  return acc;
}

int main() {
  unsigned int a, b, n, spow;
  int res;

  res = scanf("%u %u %u", &a, &b, &n);
  assert(res == 3);

  spow = spow_mod(a, b, n);
  printf("%u\n", spow);
  return 0;
}
