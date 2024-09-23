#!/bin/bash
echo “Enter the number /for checking: “
read n
x=0
for (( i = 0; i < ${#n}; i++ ))
do 
  d=${n:$i:1}
  if [ "$d%2" == 0 ]
  then
      x=$((x + d))
  else
      d2=$((d * 2))
      for (( i = 0; i < ${#d2}; i++))
      do
        a=${n:$i:1}
        x=$((x + a))
      done
  fi
fi
if [ "$x%10" == 0]
then
  echo "The number $n is valid."
else
  echo "The number $n is invalid."
fi
