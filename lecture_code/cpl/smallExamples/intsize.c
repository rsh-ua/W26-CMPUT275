#include <stdio.h>

int main() {
  unsigned int x = 4294967295;
  printf("%u\n", x); // Print x interpreted as an unsigned integer
  printf("%d\n", x); // Print x interpreted as a signed integer
  x = x + 13554;
  printf("%u\n", x); // Print x interpreted as an unsigned integer
  printf("%d\n", x); // Print x interpreted as a signed integer
}
