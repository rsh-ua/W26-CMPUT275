#include <stdio.h>

char encryptChar(char c, int shift) {
  // Takes a single character c that represents a lowercase alphabetic
  // character and encrypts it using the caesar cypher by the given shift
  // value and returns the encrypted character.
  // The caesar cipher "shifts" the alphabetic letter by the shift amount
  // For example if shift were 3 and c was 'a' then the result would be 'd'
  // When shifting goes past the end of the alphabet (eitherside) it wraps
  // back around to the other end. For example 'z' shifted by 3 would be 'c'
  // Also note shift can be negative... for example 'a' shifted by -1 would
  // be 'z'.
  // Unlike in Python if division / is performed on non-floating poin values
  // the result is integer division.
  // C also has the % modulo operator (though it's behaviour on negatives is
  // different than Python... in this case Python gets it "correct").

}
// Try writing encryptUpper that does the same thing for an upper case character!

int main() {
  // Don't worry about the code in main yet, we'll learn it later
  // this is just a test harness for your function
  char c= 'a';
  int ret = 0;
  while (ret=scanf("%d", &c) == 1) {
    printf("%c", encryptChar(c, 3)); // Change 3 for other tests
  }
  printf("\n");
}
