#include <iostream>
#include<iomanip>
using namespace std;

void sort(int array[], int sizeOfArray);
void swap(int &a, int &b);
void print_array(int array[], int sizeOfArray);

int main(){
    const int arraySize = 6;
    int a[arraySize] = {-2, 7, 0, 23, 2048, -46};

    cout << "Original array: \n";
    print_array(a, arraySize);

    sort(a, arraySize);

    cout << "Sorted array: \n";
    print_array(a, arraySize);

    return 0;
}

void sort(int array[], int sizeOfArray){
    int i, j, idx;
    int min;

    for ( i = 0; i < sizeOfArray - 1; i++){
        min = array[i];
        idx = i;
        for ( j = i + 1; j < sizeOfArray; j++){
            if (array[j] < min){
                min = array[j];
                idx = j;
            }
        }
        if (i != idx){
            swap(array[i], array[idx]);
        }
    }
}

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void print_array(int array[], int sizeOfArray){
    for (int i = 0; i < sizeOfArray; i++){
        cout << "[" << setw(2) << i << "]";
    }
    cout << endl;

    for (int i = 0; i < sizeOfArray; i++){
        cout << " " << setw(2) << array[i] << " ";
    }
    cout << endl;
}