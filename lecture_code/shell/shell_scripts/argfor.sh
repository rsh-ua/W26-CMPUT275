#!/bin/bash
count=1
for x in $1; do
  echo "Word ${count} is $x"
  count=$((count+1))
done
