#include <stdio.h>

int main(void) {

  int contador = 0, count = 0;
  unsigned long int a, b, x, n, c, d, m;
  unsigned long int t, i;
  scanf("%lu\n", &t);
  int result[t];

  while (count < t) {

    scanf("%lu %lu %lu %lu %lu %lu %lu\n", &a, &b, &x, &n, &c, &d, &m);

    int h;
    for (size_t i = 0; i <= n; i++) {
      h = (a * (x + i) + b) % m;
      if (c <= h && h <= d) {
          result[i] = contador;
          continue;
      }
      else {
        ++contador;
        continue;
      }
    }
    ++count;
  }
  for (size_t i = 0; i < t; i++) {
    printf("%d\n", result[i]);
    continue;
  }
  return 0;
}
