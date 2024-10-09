# Compiler and flags
FLAGS = -pedantic-errors -std=c++11

# Targets and dependencies
calc: calc.o lcm.o gcd.o
	g++ $(FLAGS) -o calc calc.o lcm.o gcd.o

calc.o: calc.cpp lcm.h gcd.h
	g++ $(FLAGS) -c calc.cpp

lcm.o: lcm.cpp lcm.h gcd.h
	g++ $(FLAGS) -c lcm.cpp

gcd.o: gcd.cpp gcd.h
	g++ $(FLAGS) -c gcd.cpp

# Clean target to remove all compiled files
.PHONY: clean
clean:
	rm -f calc calc.o gcd.o lcm.o
