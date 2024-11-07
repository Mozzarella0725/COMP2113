 #include<iostream>
using namespace std;

int linearSearch( const int array[], int sizeOfArray, int key, int startPos)
{
    for ( int j = startPos; j < sizeOfArray; ++j)
        if (array[j] == key)
            return j;
    
    return -1;
}

int main(){
    const int arraySize= 10;  // size of array
    int a[ arraySize];         // declare array a
    int searchKey, startPos = 0;              // value to locate in array a
    
    // fill in some data to array
    for ( int i= 0; i< arraySize; ++i)
        a[i] = 2 * i;
    a[9] = 6;
    cout<< "Enter an integer to search: ";
    cin>> searchKey;
    
    while (startPos != arraySize){
    // try to locate searchKey in a
        int element = linearSearch( a, arraySize, searchKey, startPos);
        // display search results
        if ( element != -1){
            cout<< "Value found in element " << element << endl;
            startPos = element + 1;
        }
        else {
            cout<< "Value not found" << endl;
            break;
        }
    }
    return 0;
}
