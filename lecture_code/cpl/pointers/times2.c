#include <stdio.h>
void times2(int *p) {
  *p = *p*2;
}

int main() {
  int x = 10;
  printf("x: %d\n", x);
  times2(&x);
  printf("x: %d\n", x);
  times2(&x);
  printf("x: %d\n", x);
}
