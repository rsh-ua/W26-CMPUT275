#include <stdio.h>

int main() {
  // Important to note that our boolean (logic) operators are
  // &&, ||, !
  // NOT
  // &, |, ~
  // Though the latter /ARE/ operators! (Just not boolean logic ones)
  int x;
  int y;
  scanf("%d", &x);
  scanf("%d", &y);
  // Don't worry about scanf yet, this program reads two integers from stdin
  if (x && y) {
    printf("x && y was true\n");
  }
  if (x & y) {
    printf("x & y was true\n");
  }
}
