#include <stdio.h>

void printBinary(unsigned int x) {
  // Since x is a binary number... we can just work on the bits
  // directly!
  unsigned int bit = 1<<31;
  // Initially bit is:
  // 10000000 00000000 00000000 00000000
  while (bit != 0) {
    if (bit & x) printf("1"); // Note here I specifically DO mean bitwise and, why?
    else printf("0");
    bit = bit>>1;
  }
}

int main() {
  int x = 0;
  scanf("%d", &x);
  printBinary(x);
  printf("\n");
}
