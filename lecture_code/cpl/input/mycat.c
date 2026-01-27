#include <stdio.h>

int main() {
  char c;
  while (!feof(stdin)) {
    int ret = scanf("%c", &c);
    if (ret == 1) printf("%c", c);
  }
}
