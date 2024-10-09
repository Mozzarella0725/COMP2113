/*
Create a BMI calculator application that reads the user’s weight in kilograms and then height in meters
Rhen calculate and display the user’s body mass index. 
Also, the application should display the following information so the user can evaluate his/her BMI:

BMI VALUES

Underweight: less than 18.5

Normal: between 18.5 and 24.9

Overweight: between 25 and 29.9

Obese: 30 or greater

Example
Assume the user is 64 kg in weight and 1.6 m in height, input as follows:
64 1.6
The program outputs the following:
Your BMI = 25
BMI VALUES
Underweight: less than 18.5
Normal: between 18.5 and 24.9
Overweight: between 25 and 29.9
Obese: 30 or greater
*/
#include <iostream>
using namespace std;

int main(){
    double weight, height;
    double BMI;
    cin >> weight >> height;
    BMI = weight / (height * height);
    cout << "Your BMI = " << BMI << endl;
    cout << "BMI VALUES\n" 
    << "Underweight: less than 18.5\n" 
    << "Normal: between 18.5 and 24.9\n" 
    << "Overweight: between 25 and 29.9\n" 
    << "Obese: 30 or greater";
    return 0;
}