FLAGS = -pedantic-errors -std=c++11

all: main

process_scores.o: process_scores.cpp process_scores.h
	g++ $(FLAGS) -c process_scores.cpp

main.o: main.cpp process_scores.h
	g++ $(FLAGS) -c main.cpp

main: process_scores.o main.o
	g++ $(FLAGS) -o student_scores process_scores.o main.o

clean:
	rm -f main student_scores main.o process_scores.o

.PHONY: clean
