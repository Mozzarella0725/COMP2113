#!/bin/bash

if [ ! -f "students.txt" ]; then
	echo "File students.txt not found"
	exit 0
fi

while IFS= read -r line; do
	if [[ $line == "Name"* ]]; then
		name=${line:6}
		total=0
		echo "Now the student is $name"
	elif [[ $line == "A"* ]]; then
		score=${line:4}
		total=$((total + score))
		# echo "The grade this time is $score, and in total get $total"
	elif [[ $line == "---" ]]; then
		average=$((total / 4))
		echo "Student name: $name, Average score: $average"
	fi

done < students.txt
