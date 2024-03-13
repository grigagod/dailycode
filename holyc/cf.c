// Continued fractions
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void cf(long long x, long long y) {
  long long q, r;
  while (x % y != 0) {
    q = x / y, r = x % y;
    x = y, y = r;
    printf("%lld ", q);
  }

  printf("%lld\n", x / y);
}

int main() {
  long long x = 0, y = 0;
  int res;

  res = scanf("%lld %lld", &x, &y);
  assert(res == 2);
  assert(y != 0);
  cf(x, y);
  return 0;
}
