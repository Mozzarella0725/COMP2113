#include <iostream>
using namespace std;

int main(){
    int age, height;
    cin >> age >> height;
    if (age >= 18 && age <= 25){
        if (height >= 180){
            cout << "Yes I do!";
        } else {
            cout << "I am sorry"; 
        }
    }
    else {
        cout << "Bye Bye.";
    }
    return 0;
}