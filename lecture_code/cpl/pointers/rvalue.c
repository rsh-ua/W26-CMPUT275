#include <stdio.h>

int main() {
  // The literal 4 does not need to be stored in memory...
  // Since I have not stored the value 4 somewhere (e.g. in a variable)
  // it only exists for this statement. Data whose lifetime is that of
  // only the statement they're used in are called rvalues. rvalues are not
  // guaranteed to have a memory address (they may exist only in a register)
  // as such you cannot ask for the address of an rvalue (it may not have one).
  int *p = &4;
}
