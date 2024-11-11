/* 
Write a program (C++) that takes an input number i, then perform the following:
Declare an array which contains 15 integers.
Initialize the array so that the first i elements are assigned with a value that equals to the square of the index variable. 
Initialize 15 elements only if i is greater than or equal to 15.
The next 5 elements, if available, are assigned with value 0.
While the remaining elements (if any) are assigned with a value that equals to 3 to the power of the index value.
Output the elements in the array, with a separation of space between each element.
Your program could assumes that input value is always greater than 0.
*/

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int a[15], i, j;
    cin >> i;

    for (j=0; j < min(i, 15); j++){
        a[j] = j*j;
    }

    for (int j = min(i, 15); j < min(15, min(i, 15) + 5); j++) {
        a[j] = 0;
    }

   for (int j = min(15, min(i, 15) + 5); j < 15; j++) {
        a[j] = static_cast<int>(pow(3, j));
    }

    for (int j = 0; j < 15; j++){
        cout << a[j] << " ";
    }

    return 0;
}