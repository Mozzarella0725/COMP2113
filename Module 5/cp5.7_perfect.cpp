/*
An integer is said to be a perfect number if the sum of its divisors, including 1 (but not the number itself), is equal to the number. 
For example, 6 is a perfect number, because 6 = 1 + 2 + 3. 
You are given the skeleton program perfect.cpp that will print the perfect numbers from 1 to 1000. 
Write a function isPerfect that determines whether the parameter number is a perfect number to complete the program.
*/
/*
   This program prints out the perfect numbers between 1 and N
*/

#include <iostream>
using namespace std;

const int N = 1000;

bool isPerfect(int number)
{
    int sum = 1;

    for (int i = 2; i < number; ++i)
        if (number % i == 0)
            sum += i;

    return sum == number;
}

int main()
{
	cout << "For the integers from 1 to " << N << ":\n";

	for (int j = 2; j <= N; ++j)
		if (isPerfect(j))
			cout << j << " is perfect\n";

	cout << endl;

	return 0;
}