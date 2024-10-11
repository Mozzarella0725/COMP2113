/*
You are given the skeleton program that will calculate the age after the birthday. 
Implement the function birthday() to increment the parameter age using pass by reference to complete the program.

Example
Assume the input is 18
18
The output will be:
My age after birthday is 19
*/

#include <iostream>
using namespace std;

// ### Implement birthday() here ###
void birthday(int &age){
    age++;
}

// ###

int main(){
    int myAge;
    cin >> myAge;
    birthday(myAge);
    cout << "My age after birthday is " << myAge;
}