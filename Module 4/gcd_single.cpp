// gcd_single.cpp
// This program finds the GCD of two numbers 
// Headers
#include <iostream>
using namespace std;

// Function declaration
int gcd(int a, int b);

// Main program
int main() {
    int a, b, c;
    cout << "Please input two positive numbers: "; 
    cin >> a >> b;
    c = gcd(a, b);
    cout << "GCD is " << c << endl;
}

// Function definition
// for simplicity, we assume both inputs to be positive 
int gcd(int a, int b) {
    while(a != b) {
        if(a > b) {
            a -= b;
        } else { b -= a;
        } 
}
    return a;
    }