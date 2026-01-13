#!/usr/bin/python3.13
import sys

# The sys module has a list argv in it which
# contains the command line arguments provided to our program

print(f"I received {len(sys.argv)} command line arguments")

x = 0
for arg in sys.argv:
  print(f"Arg {x}: {repr(arg)}")
  x += 1
