/*A palindrome is a string that is the same backward as it is forward. 
Write a program that lets a user enter a string and determine if it is a palindrome.
The function should output The input string is a palindrome. 
if the string is a palindrome and The input string is not a palindrome. otherwise.

However, your program should handle complications such as capitalization, spaces, and punctuation. 
For example, Madam, I'm Adam should be considered as a palindrome.

Hint: you may reduce the input string to madamimadam first and proceed with the checking.

Example 1
Input
Madam, I’m Adam
Output
The input string is a palindrome.

Example 2
Input
Sir, I’m Adam
Output
The input string is not a palindrome.*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string convert(string input){
    int n = input.length();
    string output;
    char letter;
    for (int i = 0; i < n; i++){
        letter = input[i];
        if (isalpha(letter)) {
            letter = tolower(letter);
            output += letter;
        }
    }
    return output;
}

bool palindrome(string output){
    int n = output.length();
    int left = 0;
    int right = n-1;
 
    while (left < right) {
        if (output[left] != output[right]){
            return false;
        } else {
            left++;
            right--;
        }
    }

    return true;
}


int main(){
    string input;
    getline(cin, input);
    string output = convert(input);
    // cout << output << endl;
    if (palindrome(output)){
        cout << "The input string is a palindrome." << endl;
    } else {
        cout << "The input string is not a palindrome." << endl;
    }
    return 0;
}