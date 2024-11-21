/*
The mode of a data set is the number that occurs most frequently in the set.
Write a program to find the mode of the set that is inputted by the user. 
Your program should use a dynamic array to store the user input.
After printing the result, your program should release the memory allocated to the dynamic array.
You could assume that there is always one and only one mode in the input set.

Hints:
Example of declaring a dynamic array (where SIZE is defined during runtime):

int *set = new int[SIZE];

Example of releasing the memory of the dynamic array.

delete[] set;
*/

/*
The mode of a data set is the number that occurs most frequently in the set.
Write a program to find the mode of the set that is inputted by the user. 
Your program should use a dynamic array to store the user input.
After printing the result, your program should release the memory allocated to the dynamic array.
You could assume that there is always one and only one mode in the input set.

Hints:
Example of declaring a dynamic array (where SIZE is defined during runtime):

int *set = new int[SIZE];

Example of releasing the memory of the dynamic array.

delete[] set;
*/

#include <iostream>
#include <map>
using namespace std;

int main(){
    int SIZE;
    cin >> SIZE;
    int *set = new int[SIZE];

    for (int i = 0; i < SIZE; i++){
        cin >> set[i];
    }

    map<int, int> frequencyMap;
    for (int i = 0; i < SIZE; i++) {
        frequencyMap[set[i]]++;
    }

    int mode = set[0];
    int maxFrequency = frequencyMap[mode];

    for (map<int, int>::iterator it = frequencyMap.begin(); it != frequencyMap.end(); ++it) {
        if (it->second > maxFrequency) {
            mode = it->first;       
            maxFrequency = it->second; 
        }
    }

    // Print the mode
    cout << "The mode of the set is " << mode << endl;

    delete[] set;

    return 0;
}