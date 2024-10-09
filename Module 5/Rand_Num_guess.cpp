#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(NULL));
    int num = rand() % 50 + 1; 
    int guess;
    bool isGuessed;
    
    isGuessed = false;
    
    while (!isGuessed) {
        cout << "Make a guess (0-50)? ";
        cin >> guess;
    
    if (guess == num) {
        cout << "Correct!" << endl; 
        isGuessed = true;
    }
    else if (guess < num)
      cout << "Too small.  Guess again!" << endl;
    else
      cout << "Too large.  Guess again!" << endl;
  }
return 0; 
}