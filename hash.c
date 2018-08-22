#include <stdio.h>

int main(void) {

  size_t i = 0;
  int count;
  unsigned long int a, b, x, n, c, d, m;
  unsigned long int t;
  scanf("%lu", &t);
  int result[t];

  for (count = 0; count < t; count++){

    scanf("%lu %lu %lu %lu %lu %lu %lu", &a, &b, &x, &n, &c, &d, &m);
    int h;
    int contador = 0;

    for (i = 0; i <= n; i++) {
      h = (a * (x + i) + b) % m;
      if (c <= h && h <= d) {
          contador++;
      }
    }
    result[count] = contador;
  }

  for (i = 0; i < t; i++) {
    printf("%d\n", result[i]);
  }
  return 0;
}
