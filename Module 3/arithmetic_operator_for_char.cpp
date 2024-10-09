#include <iostream>
using namespace std;
int main() {
    char c = 'Y';
    c = c + ('a' - 'A');
    cout << "1: " << c << endl;
    c = c + 1;
    cout << "2: " << c << endl;
}