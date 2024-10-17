#include <iostream>
using namespace std;

int main() {
    int array[9];
    int sum;

    for (int i = 0; i < 10; i++){
        cin >> array[i];
        sum += array[i];
    }
    
    for (int i = 9; i >= 0; i--){
        cout << array[i] << endl;
    }

    cout << sum << endl;

    return 0;
}