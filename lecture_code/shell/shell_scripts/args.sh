#!/bin/bash
echo "I was given $# args"
echo "Command itself: $0"

if [ $# -ne 3 ]; then
  echo "Usage: $0 s1 s2 s3"
  exit 1
fi
echo "Arg 1: $1, Arg 2: $2, Arg 3: $3"
