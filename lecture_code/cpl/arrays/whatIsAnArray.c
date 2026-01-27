#include <stdio.h>

int main() {
  int arr[10];
  for (int i = 0; i < 10; ++i) {
    arr[i] = i*2;
  }
  // What is the variable arr? It /is/ an array of integers.
  // That is its type. Clearly it must be, because it size
  // is much larger than an int (its the size of 10 ints)
  printf("Sizeof arr: %lu\n", sizeof arr);
  // But, the index operator is a binary operator that takes
  // two expressions. The way we've called it is with the
  // array as the first operand and an integer as the second
  // operand. So what does the array expression evaluate to then?
  // Since index of would be expr[expr]
  printf("arr: %p\n", arr);
  printf("&arr: %p\n", &arr);
  int x = 10;
  int *p = &x;
  printf("p: %p\n", p);
  printf("&p: %p\n", &p);
  printf("x: %d\n", x);
  printf("&x: %p\n", &x);
}
