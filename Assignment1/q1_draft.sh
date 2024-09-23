#!/bin/bash
echo “Enter the number /for checking: “
read n
x=0
for (( i = 0; i < ${#n}; i++ ))
do 
  d=${n:$i:1}
  if [ "$d%2" == 0 ]
  then
      x=$((x + d)
  else
      
      
