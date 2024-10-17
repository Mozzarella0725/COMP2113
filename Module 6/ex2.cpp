#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int array[9];
    int product = 1;

    for (int i = 0; i < 10; i++){
        array[i]=2*i+1;
        product *= array[i];
        cout << array[i] << " ";
    }

    cout << "\n The product is: " << product;
    
    return 0;
}