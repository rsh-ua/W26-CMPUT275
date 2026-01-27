#include <stdio.h>

int main() {
  char c;
  while (!feof(stdin)) {
    scanf("%c", &c);
    printf("%c", c);
  }
}
