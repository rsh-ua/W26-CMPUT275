#include <stdio.h>

int fib(int n) {
  if (n==0) return 1;
  if (n==1) return 1;
  return fib(n-1) + fib(n-2);
}

void readAndPrintInt() {
  //int y;
  int y = 0; // Consider this program when the above is left and
             // reads fail versus when we initialize
  scanf("%d", &y);
  printf("I read in the integer: %d\n", y);
}

int main() {
  int x = fib(7);
  readAndPrintInt();
  printf("By the way apropos of nothing fib(7) is %d\n", x);
}
