/*
You are given the skeleton program vowel.cpp that will count the number of vowel characters (i.e. A, E, I, O, U, a, e, i, o, u) inputted by the user. 
Write a bool-returning function, isVowel, that returns the value true if a given character is a vowel and otherwise returns false to complete the program.
*/
/*
   This program prompts the user to input a sequence of characters and outputs the number of vowels
*/

#include <iostream>
using namespace std;

bool isVowel(char c){
    char charList[] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    bool found = false;
    for (int i = 0; i < 10; ++i) {
        if (charList[i] == c) {
            found = true;
            break;
        }
    }
    return found;
}

int main()
{
	int n;
	int numVowel = 0;
	char c;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> c;
		if (isVowel(c))
			numVowel++;
	}

	cout << "Number of vowels = " << numVowel << endl;

	return 0;
}