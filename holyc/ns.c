// Number systems
#include <assert.h>
#include <stdio.h>

void conv(unsigned int x, unsigned int base) {
  if (x == 0)
    return;
  conv(x / base, base);
  printf("%d", x % base);
}

int main() {
  unsigned int x, base;
  int res;

  res = scanf("%u %u", &x, &base);
  assert(res == 2);

  conv(x, base);
  return 0;
}
