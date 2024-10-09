/*
Please write a program that reads user input repeatedly until -1 is entered
display the average of the inputted values.

Input specification
A sequence of double values until user input -1.
You can assume that users will always input double values.

Output specification
If the user enters -1, the program will print out the average of the values input (excluding the -1 in the calculation of average value) and the program ends (without ending newline at the end).
You can assume that users will input at least one value so there will always be an average value computed by your program.

Example
Suppose user input the following:
2.5 2.5 3.5 1.5 -1
The program output the following:
2.5
*/
#include <iostream>
using namespace std;

int main(){
    double x, sum = 0, average;
    int count = 0;
    cin >> x;
    while (x != -1){
        sum += x;
        count += 1;
        average = sum / count;
        cin >> x;
    }
    cout << average;
    return 0;
}