#include <iostream>
using namespace std;

int main() {
    // Initialize an array with characters 'a' to 'j'
    char charArray[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'};
    
    // Print the characters in reverse order
    cout << "Characters in reverse order: " << endl;
    for (int i = 9; i >= 0; i--) {
        cout << charArray[i] << " ";
    }
    
    cout << endl; // Print a newline after the output
    return 0;
}
