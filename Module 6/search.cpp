#include<iostream>
using namespace std;

int linearSearch( const int array[], int sizeOfArray, int key)
{
    for ( int j = 0; j < sizeOfArray; ++j)
        if (array[j] == key)
            return j;
    
    return -1;
}

int main(){
    const int arraySize= 10;  // size of array
    int a[ arraySize];         // declare array a
    int searchKey;              // value to locate in array a
    
    // fill in some data to array
    for ( int i= 0; i< arraySize; ++i)
        a[i] = 2 * i;
        
    cout<< "Enter an integer to search: ";
    cin>> searchKey;
    
    // try to locate searchKeyin a
    int element = linearSearch( a, arraySize, searchKey);
    
    // display search results
    if ( element != -1)
        cout<< "Value found in element " << element << endl;
    else
        cout<< "Value not found" << endl;
    
    return 0;
}