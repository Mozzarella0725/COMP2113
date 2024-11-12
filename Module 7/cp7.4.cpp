#include <iostream>
#include <string>

using namespace std;

/*
// iterative version
string reverse( string s )
{
	string r = "";

	for (int i = 0; i < s.length(); ++i)
		r = s[i] + r;

	return r;
}
*/


// recursive version?

string reverse(string s){
	if (s.length() < 2){
		return s;
	} else {
		return s[s.length()-1] + reverse(s.substr(0, s.length()-1));
	}
}

int main()
{
	string s;
	cin >> s;

	cout << "String in reverse = " << reverse(s) << endl;

	return 0;

}