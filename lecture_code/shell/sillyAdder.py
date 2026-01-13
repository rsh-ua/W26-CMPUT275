#!/usr/bin/python3.13
import sys

# This program assumes it receives 2 command-line arguments and
# assumes they are both integers and adds them together and prints the result

# Also, maybe /assuming/ is a bad idea! Make /sure/ the user gave you two arguments

if len(sys.argv) != 3:
  print(f"Usage: {sys.argv[0]} int1 int2")
  sys.exit(1)


print(int(sys.argv[1]) + int(sys.argv[2]))
