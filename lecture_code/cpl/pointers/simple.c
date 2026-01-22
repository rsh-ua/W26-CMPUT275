#include <stdio.h>

int main() {
  int x = 10;
  int *p = &x;
  printf("value of p: %p\n", p);
  printf("value of dereferenced p (*p): %d\n", *p);
  *p = -1;
  printf("The value of x: %d\n", x);
}
