/*
Write a program that takes as input five numbers and outputs the mean (average) and standard deviation (with 2 deciaml point precision) of the numbers. 
If the numbers are x1, x2, x3, x4, and x5, then the mean is 
x = (x1+x2+x3+x4+x5)/5
and the standard deviation is:
s = sqrt(((x1-x)^2+(x2-x)^2+(x3-x)^2+(x4-x)^2+(x5-x)^2)/5)

Hints: Your program may contain following functions: 
a function that calculates and returns the mean 
a function that calculates and returns the standard deviation.
You may include #include <iomanip> and std::cout << std::fixed; std::cout << std::setprecision(2); to set the number of decimal points to be printed. 

Example
--- Input ---
1.0 2.0 3.0 4.0 5.0
--- Program output ---
Mean = 3.00
Standard deviation = 1.41
*/

#include <iomanip>
#include <iostream>
#include <cmath>
using namespace std;


double mean(double x1, double x2, double x3, double x4, double x5){
    return (x1+x2+x3+x4+x5)/5;
}

double standard_deviation(double x1, double x2, double x3, double x4, double x5){
    double x = (x1+x2+x3+x4+x5)/5;
    return sqrt((pow(x1-x, 2) + pow(x2-x, 2) + pow(x3-x, 2) + pow(x4-x, 2) + pow(x5-x, 2)) / 5);
}

int main(){
    double x1, x2, x3, x4, x5, MEAN, SD;
    cin >> x1 >> x2 >> x3 >> x4 >> x5;
    cout << fixed; 
    cout << setprecision(2);
    MEAN = mean(x1, x2, x3, x4, x5);
    SD = standard_deviation(x1, x2, x3, x4, x5);
    cout << "Mean = " << MEAN << endl;
    cout << "Standard deviation = " << SD << endl;
    return 0;
}