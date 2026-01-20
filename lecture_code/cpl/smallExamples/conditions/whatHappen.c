#include <stdio.h>

int main() {
  // Somebody set up us the bomb
  int x;
  scanf("%d", &x);
  x = ~x;
  x = x+1;
  printf("%d\n", x);
}
