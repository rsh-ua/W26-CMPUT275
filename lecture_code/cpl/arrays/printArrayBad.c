#include <stdio.h>

void printArray(int arr[]) {
  unsigned int len = sizeof arr / sizeof arr[0];
  for (unsigned int i = 0; i < len; ++i) {
    printf("%d\n", arr[i]);
  }
}

int main() {
  int arr[] = {23, 5489, 5310, 33, 32, 11, 11, 334, 67, 1};
  printArray(arr);
}
