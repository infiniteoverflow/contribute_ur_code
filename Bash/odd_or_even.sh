#!/bin/bash

# Take use input
echo "Enter number: "
read a

if (( $a % 2 )); then
  echo $a "is odd"
else
  echo $a "is even"
fi
