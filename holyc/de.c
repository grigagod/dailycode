// Diophantine equations
#include <assert.h>
#include <stdio.h>

int iabs(int x) { return (x < 0) ? -x : x; }

int eu_mod(int x, int y, int *q) {
  int r;
  assert(y != 0);
  r = x % y;
  if (r < 0)
    r += iabs(y);
  *q = (x - r) / y;
  return r;
}

int egcd(int a, int b, int *x, int *y) {
  int x1, y1, d, q;
  if (b == 0) {
    *x = 1;
    *y = 0;
    return a;
  }
  d = egcd(b, eu_mod(a, b, &q), &x1, &y1);
  *x = y1;
  *y = x1 - y1 * q;
  return d;
}

int solve(int a, int b, int c, int *x, int *y) {
  int g, r, q;
  if (a == 0 && b == 0) {
    return 0;
  }
  g = egcd(a, b, x, y);
  r = eu_mod(c, g, &q);
  if (r) {
    return 0;
  }
  *x *= q;
  *y *= q;
  return 1;
}

int main() {
  int a, b, c, x, y;
  int res, ok;

  res = scanf("%d %d %d", &a, &b, &c);
  assert(res == 3);

  ok = solve(a, b, c, &x, &y);
  if (ok) {
    printf("%d %d\n", x, y);
  } else {
    printf("NONE\n");
  }

  return 0;
}
