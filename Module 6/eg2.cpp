#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    const int arraySize= 7;           // ignore element zero
    int frequency[arraySize]= {};   // initialize elements to 0
    srand( time(0) );   // seed random number generator
    
    // roll die 6,000,000 times; use die value as frequency index
    for (int roll = 1; roll <= 6000000; ++roll)
        ++frequency[ 1 + rand() % 6 ];
        
    cout<< "Face" << setw(13) << "Frequency" << endl;
    
    // output each array element's value
    for ( int face = 1; face < arraySize; ++face )
        cout<< setw(4) << face << setw(13) << frequency[face] << endl;
    
    return 0;
}
