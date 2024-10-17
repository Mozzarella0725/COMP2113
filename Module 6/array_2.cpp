#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // use initializerlist to initialize array n
    int n[10] = { 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 };
    
    cout<< "Element" << setw(13) << "Value" << endl;

    // output each array element's value
    for ( int j = 0; j < 10; ++j )
        cout<< setw(7) << j << setw(13) << n[j] << endl;
    return 0;
}