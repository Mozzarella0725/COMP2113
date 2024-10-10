#include <iostream>
using namespace std;

double multiplication(double k, double j){
    double result;
    result = k * j;
    return result;
}

int main(){
    double result;
    result = multiplication(2.5, 1.5);
    cout << result << endl;
    return 0;
}
