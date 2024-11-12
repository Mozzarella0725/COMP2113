// Handling user commands

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct Course{
	string code;
	string name;
	string lecturer;
};

int main() {
	string input;
	cin >> input;

	string code;
	Course courses[20];
	int num = 0;

	while (input != "exit") {
		if (input == "add") {
			// handle add commnad
			cin >> courses[num].code >> courses[num].name >> courses[num].lecturer;
			num ++;
		}
		if (input == "show") {
			// handle show commnad
			cin >> code;
			for (int i = 0; i <= num; i++){
				if (code == courses[i].code){
					cout << "Name: " << courses[i].name << ", Lecturer: " << courses[i].lecturer << endl;
				}
			}
		}
		cin >> input;
	}
	return 0;
}