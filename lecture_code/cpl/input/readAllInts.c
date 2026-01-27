#include <stdio.h>

/*
* this program should read ALL integers from the input stream
* and print out each of them on their own line
*/


int main() {
  int x = 0;
  while (!feof(stdin)) {
    if (scanf("%d", &x) != 1) {
      char garbage;
      scanf("%c", &garbage);
      #ifdef DEBUG
      printf("The garbage character was %c\n", garbage);
      #endif
    } else {
      printf("%d\n", x);
    }
  }
}
