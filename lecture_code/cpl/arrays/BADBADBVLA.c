#include <stdio.h>

int main() {
  int x = 5;
  scanf("%d", &x);
  int arr[x]; // Variable length array (VLA)! BAD!!!
  for (int i = 0; i <x; ++i) {
    arr[i] = i*2;
    printf("%d\n", arr[i]);
  }
}
