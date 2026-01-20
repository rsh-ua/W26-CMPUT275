#include <stdio.h>
int main() {
  /*
   * C does not do "type conversions" for you implicitly.
   * Most commonly it just assigns bits.
  */
  char c = '9';
  int x = c;
  int z = 611;
  char q = z;
  printf("%d\n", x); // Prints what?
  printf("%c\n", q); // Prints what?
  // But... the following:
  x = 53839;
  float n = x;
  printf("%f\n", n);
  // n /WAS/ converted from x, because the binary for
  // the floating point 53839 is NOT the same as the
  // integer 53839
  // For example... if I just treat n as if it were an int...
  printf("%d\n", n);
}
