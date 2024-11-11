/*
Write a program that read three input strings and replaces all the occurrences of the second string with the third string in the first string.
The first input string may contain spaces, but you can assume the second and the third input are a single word (No spaces).
Hint: Use getline() instead of cin when necessary.
Example
Input
I go to airbus by bus
bus
plane
Output (All occurrences of bus are replaced by plane)
I go to airplane by plane
If your program time-out and cannot pass all test case, make sure you have handled cases like replacing "a" by "ab", "a" by "ba", and "a" by "aa".
*/
#include <iostream>
#include <string>
using namespace std;

void replace(string& text, const string& Old, const string& New){
    int pos = 0;
    int n1 = Old.length(), n2 = New.length();

    while ((pos = text.find(Old, pos)) != string::npos) {
        text.replace(pos, n1, New);
        pos += n2;
    }
}

int main(){
    string text, Old, New;
    getline(cin, text);
    cin >> Old;
    cin >> New;
    replace(text, Old, New);
    cout << text << endl;
    return 0;
}