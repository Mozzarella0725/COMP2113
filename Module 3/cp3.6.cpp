/* 
Write a program that reads an integer and determines and prints whether it is odd or even. 
If the integer x is odd, print "x is odd". 
If x is even, print "x is even" 
Name the submission file whatever you want with .cpp extension.
Example 1
Suppose user input the following:
1
The program output the following:
1 is odd

Example 2
Suppose user input the following:
2
The program output the following:
2 is even
*/

#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    if (x % 2 == 0){
        cout << x << " is even";
    } else {
        cout << x << " is odd";
    }
    return 0;
}