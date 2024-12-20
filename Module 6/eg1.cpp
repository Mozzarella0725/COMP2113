#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    // constant variable can be used to specify array size
    const int arraySize= 10;
    int s[arraySize];  
    // array s has 10 elements

    for (int i= 0; i< arraySize; ++i)     
    // set the values
        s[i] = 2 + 2*i;
        cout<< "Element" << setw(13) << "Value" << endl;

    // output contents of array s in tabular format
    for ( int j = 0; j < arraySize; ++j )
        cout<< setw(7) << j << setw(13) << s[j] << endl;
    
    return 0;
}