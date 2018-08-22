#include <stdio.h>

int main(void) {

  int count = 0;
  unsigned long int t;
  scanf("%lu\n", &t);

  while (count < t) {

    int contador;
    unsigned long int a, b, x, n, c, d, m;
    scanf("%lu %lu %lu %lu %lu %lu %lu\n", &a, &b, &x, &n, &c, &d, &m);

    if (c > d >= m || a > m || b > m) {
      int i;
      int result[t];
      int h;
      h = (a * (x + i) + b) % m;
      for (size_t i = 0; i < n; i++) {
        if (result[i] == 0) {
          result[i] = h;
        }
        else {
          ++i;
        }
      }
      for (size_t i = 0; i < n; i++) {
        if (result[i] == h) {
          ++contador;
          ++i;
        }
      }
      ++count;
      printf("%d\n", contador);
    }
  }
 return 0;
}
