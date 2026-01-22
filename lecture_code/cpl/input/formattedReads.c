#include <stdio.h>

int readTwice() {
  int x=-1, y=-2;
  scanf("%d", &x);
  scanf("%d", &y);
  // Note should check returns of scanf
  printf("x:%d\ny:%d\n", x, y);
}

int readOnce() {
  int x=-1, y=-2;
  scanf("%d-%d", &x, &y);
  // Note should check returns of scanf
  printf("x:%d\ny:%d\n", x, y);
}


int main() {
  #ifdef READONCE
  readOnce();
  #else
  readTwice();
  #endif
}
