/*
Write a program that inputs a five-digit integer.
Separate the integer into its digits and print them separated by a comma each. 
For example, if the user types in
42339
the program should print:
4,2,3,3,9
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    cout << x / 10000 << "," << (x % 10000) / 1000 << "," << (x % 1000) / 100 << "," << (x % 100) / 10 << "," << x % 10;
    return 0;
}