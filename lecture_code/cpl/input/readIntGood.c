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
  // scanf returns an int - the number of read in values.
  // If it is not the number of values we requested then a read failed
  // In this case I'm requested one value (a single integer) be read
  // and so the return value of scanf had better be 1
  int ret = scanf("%d", &y);
  if (ret != 1) {
    printf("The read failed! scanf returned %d\n", ret);
  } else {
    printf("I read in the integer: %d\n", y);
  }
}

int main() {
  int x = fib(7);
  readAndPrintInt();
  printf("By the way apropos of nothing fib(7) is %d\n", x);
}
