import random, sys
for i in range(100000000):
  print(chr(random.randint(65,90)), end="", file=sys.stderr, flush=True)
