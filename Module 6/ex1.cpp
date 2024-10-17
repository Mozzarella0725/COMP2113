#include <iostream>
#include <iomanip>

using namespace std;
int main(){
    int array[9];
    int sum;

    for (int i = 0; i < 10; i++){
        array[i]=i+1;
        sum+=array[i];
    }

    cout << sum;
    
    return 0;
}
