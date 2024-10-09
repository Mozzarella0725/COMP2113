// gcd_single.cpp
// This program finds the GCD of two numbers
#include <iostream>
using namespace std;

int gcd(int a, int b);

int main() {

  int a, b, c;

  cout << "Please input two positive numbers: ";
  cin >> a >> b;

  c = gcd(a, b);
  cout << "GCD is " << c << endl;

}

// for simplicity, we assume both inputs to be positive
int gcd(int a, int b) {

  while(a != b) {

    if(a > b) {
      a -= b;
    } else {
      b -= a;
    }

  }

  return a;

}
