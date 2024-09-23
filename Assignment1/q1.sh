#!/bin/bash
echo "Enter the number for checking: "
read n
x=0

for (( i = 0; i < ${#n}; i++ ))
do
  d=${n:$i:1}
  if (( $i % 2 == 1 ))
  then
      x=$((x + d))
      echo "d=$d x=$x"
  else
      d2=$((d * 2))
      a=$((d2 % 10))
      b=$((d2 / 10))
      x=$((x + a + b))
      echo "d=$d d2=$d2 a=$a b=$b x=$x"   
  fi
done
if (( $x % 10 == 0 ))
then
  echo "The number $n is valid."
else
  echo "The number $n is invalid."
fi
