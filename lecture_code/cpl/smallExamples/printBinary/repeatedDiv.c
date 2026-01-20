#include <stdio.h>

void printBinaryHelper(unsigned int x) {
  if (x == 0) {
    return;
  }
  printBinaryHelper(x/2);
  printf("%d", x%2);
}

void printBinary(unsigned int x) {
  if (x == 0) {
    printf("0");
    return;
  }
  printBinaryHelper(x);
}

// Initial attempt:
void printBinaryFirst(unsigned int x) {
  while (x != 0) {
    printf("%d", x%2);
    x = x/2;
  }
  // Why didn't this work? Why does the above solution fix it?
}

int main() {
  int x = 0;
  scanf("%d", &x);
  printBinary(x);
  printf("\n");
}
