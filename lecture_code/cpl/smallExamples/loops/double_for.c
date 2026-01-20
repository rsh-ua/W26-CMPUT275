#include <stdio.h>

int main() {
  int x;
  int y;
  for (x=0, y=0; x*y<100; x=x+2, y=y+3) {
    printf("(%d, %d)\n", x, y);
  }
}
