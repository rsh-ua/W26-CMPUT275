#include <stdio.h>
void printBinary(unsigned int x) {
  // First we must find the largest power of 2 that is still less than or equal to x....
  unsigned int pow = 1;
  // When writing a loop if it should guard only ONE statement then you do not NEED curly
  // braces, it just guards the immediate next statement.
  // Suggestion: Always use curly braces to save yourself pain.
  // Useful... << and >> are binary operators whose left operand is any collection of bits
  // and the second operand is a natural number
  // << is the LEFT BITSHIFT operator x<<y means move the bits of x y positions to the left
  //   (filling in the right with 0s)
  // >> is the RIGHT BITSHIFT operator x>>y means move the bits of x y positions to the right
  //    - for signed numbers the new bits to the left are padded with whatever the sign bit of x was
  //    - for unsigned types the new bits to the left are padded with 0
  while (pow < x && pow != 1<<31) pow = pow*2;
  // pow will now be the first power of 2 that is equal to or larger than x
  if (pow != x) pow = pow/2;
  while (pow != 0) {
    if (pow <= x) {
      printf("1");
      x = x - pow;
    } else {
      printf("0");
    }
    pow = pow/2;
  }
}


int main() {
  int x = 0;
  scanf("%d", &x);
  printBinary(x);
  printf("\n");
}
