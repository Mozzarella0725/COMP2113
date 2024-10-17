#include <iostream>
using namespace std;

int main() {
    int frequency[6]={0}, input;

    while (true){
        cin >> input;

        if (input == 0){
            break;
        } else {
            frequency[input - 1] += 1;
        }
    }
    
    for (int i = 0; i < 6; i++){
        cout << i+1 << ": " << frequency[i] << endl;
    }
 
    return 0;
}