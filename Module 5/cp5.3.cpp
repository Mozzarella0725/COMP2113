#include <cmath>
#include <iostream>
using namespace std;
int k = 10;

void display(int m){
    cout << m << endl;
}

int main(){
    for (int j = 50; j >= 1; j--){
        if (j % 2 == 0){
            k = k + j;
        }
    }
    display(k);
    return 0;
}
