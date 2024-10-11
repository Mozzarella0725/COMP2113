#include <iostream>
using namespace std;

// void f(double &p, double &q, double r, double s){
void f(double &p, double &q, double &r, double &s) {
    double w;
    w = q;
    q = p;
    p = w;
    r = 10 * p;
    s = 100 * q;
}

int main(){
    double a, b, c, d;
    b = 1.1;
    c = 10.1;
    a = 100.1;
    d = 1000.1;

    f(a, b, c, d);
    cout << a << "\n" << b << "\n" << c << "\n" << d << endl;
    return 0;
}
