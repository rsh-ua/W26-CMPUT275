#include <stdio.h>

char changeCase(char c) {
  // Takes a character c that is an alphabetic character
  // and swaps the case. So if it was upper returns the lowercase
  // version, if it was lower returns upper case...
  char bit = 32;
  return c^bit;
  // The ^ operator is the bitwise XOR operator
  // xor means "Exclusive or"
  // bitwise exclusive or of two numbers x and y
  // is a result where the bits are 1 if the bit was on
  // in /ONE/ operand, 0 otherwise

  // So bit here is set to:
  // 0010 0000
  // So whatever the character is
  // if it has the 2^5 bit set it will
  // be /unset/ in the answer (because it was on in both)
  // if it is not set in the original character then it will
  // be set in the answer (because it was on in just bit)
  // This thus flips the 2^5 bit of the given character
  // Which because of ASCII representation does in fact
  // switch cases
}

int isAlpha(char c) {
  // True if c is alphabetic false otherwise
  return (c>='a' && c<='z') || (c>='A' && c<='Z');
}

int main() {
  char c;
  while (scanf("%c", &c) == 1) {
    if (isAlpha(c)) {
      printf("%c", changeCase(c));
    } else {
      printf("%c", c);
    }
  }
}
