import sys


# The first command line argument in sys.argv is our program name itself
# so ignore that.
# Assume that all other command line arguments are paths to files and open and
# display their contents

for arg in sys.argv[1:]:
  f = open(arg, "r")
  print(f"File contents of file: {arg}")
  contents = f.read()
  print(contents, end="")
  f.close()

# If we receive no arguments we should read from
# standard input and paste that
if len(sys.argv) == 1:
  for line in sys.stdin:
    print(line,end="")
