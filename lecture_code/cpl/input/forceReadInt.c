#include <stdio.h>

/*
* this program should read an integer from the input stream
* and print out twice its value.
* If the user is obstinant and does not give us an integer
* we should repeatedly ask them for one until we receive one
*/
/*
// make sure you understand why this version doesn't work!
int main() {
  int x = 0;
  printf("Please enter an integer: ");
  while (scanf("%d", &x) != 1) { // Keep looping until read suceeds
    printf("I said... PLEASE enter an integer! ");
  }
  printf("Your number times two is: %d\n", x*2);
}
*/


int main() {
  int x = 0;
  printf("Please enter an integer: ");
  while (scanf("%d", &x) != 1) { // Keep looping until read suceeds
    // The only thing I know if the read failed is that the very FIRST
    // character in the input stream is not a digit. So...
    // If I want to succeed in reading an integer... I'd better get rid of it
    char garbage;
    scanf("%c", &garbage);
    #ifdef DEBUG
    printf("The garbage character was %c\n", garbage);
    #endif
    printf("I said... PLEASE enter an integer! ");
  }
  printf("Your number times two is: %d\n", x*2);
}
