#include <stdio.h>

int main() {
  int x = 0;
  for (scanf("%d", &x); x > 1; x = (x % 2) ? 3*x+1 : x/2) {
    printf("%d\n", x);
  }
}
