// Extended euclid
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

long long iabs(long long x) { return (x < 0) ? -x : x; }

long long eu_mod(long long x, long long y, long long *q) {
  long long r;
  assert(y != 0);
  r = x % y;
  if (r < 0)
    r += iabs(y);
  *q = (x - r) / y;
  return r;
}

long long egcd(long long x, long long y, long long *a, long long *b) {
  long long a1, b1, d, q;
  if (y == 0) {
    *a = 1;
    *b = 0;
    return x;
  }
  d = egcd(y, eu_mod(x, y, &q), &a1, &b1);
  *a = b1;
  *b = a1 - b1 * q;
  return d;
}

int main() {
  long long x, y, a, b, d;
  long long res;

  res = scanf("%lld %lld", &x, &y);
  assert(res == 2);
  d = egcd(x, y, &a, &b);
  printf("%lld %lld %lld\n", a, b, d);
  return 0;
}
