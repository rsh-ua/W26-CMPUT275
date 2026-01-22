#include <stdio.h>

int main() {
  printf("size of an int: %lu\n", sizeof(int));
  printf("size of a pointer to an int: %lu\n", sizeof(int*));
  int x = 10;
  int *p = &x;
  int y = &x;
  printf("value of p: %p\n", p);
  printf("value of y: %p\n", y);
  ++p;
  ++y;
  printf("value of p after incrementing: %p\n", p);
  printf("value of y after incrementing: %p\n", y);

}
