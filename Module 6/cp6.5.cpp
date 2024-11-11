/*
Write a program to output the variance of up to 20 double precision floating point numbers which are inputted by the user.
Your program should first allow users to input how many numbers (maximum: 20) they want to calculate, 
then allows them to input the value of the numbers.
Please store the numbers inputted by the user in an array,
and you are expected to have a function that receive the numbers (in array format), 
then calculates and returns the variance.
variance = (summation ( x - mean)^2 ) / N
where μ is the mean of inputs and N is the number of inputs.
Example: The user wants to calculate the variance of 3 numbers which are 1,2,3.
--- Input ---
3
1 2 3
--- Expected output ---
Variance = 0.666667
You can assume that the user would only input up to 20 double precision floating point numbers in this program.
*/

#include <iostream>
#include <cmath>
using namespace std;

double variance(int n, double a[]){
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
    }

    double mean = sum / n;
    double variance = 0;
    for (int i = 0; i < n; i++){
        variance += pow((a[i]-mean), 2);
    }
    variance = variance / n;

    return variance;
}

int main(){
    int n;
    cin >> n;

    double a[n];

    for (int i = 0; i < n; i++ ){
        cin >> a[i];
    }

    cout << variance(n, a) << endl;

    return 0;
}