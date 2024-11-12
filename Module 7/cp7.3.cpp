/* Write a program to report the daily temperature given the hourly temperature of each day.
The temperature records[1] are stored in "temperature.txt". 
In this file, each line contains the date of the day followed by 24 hourly temperatures within the 24 hours.
Your program will 
1. read the data from "temperature.txt", 
2. calculate the average temperature and output the result to the file "average.txt" 
	with each line containing the date and the average temperature (truncated to 1 decimal place) of the day.

You should assume that "temperature.txt" and "average.txt" are located to the directory where you write your .cpp file. 
Hints:
You may need to include <fstream> in order to read from and write to files. 
Remember to call .close() on both instream and outstream objects after finish reading and writing files.
You may need to include <iomanip> and cout << fixed << setprecision() to set the number of decimal places to display.*/

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

struct Temperature{
	string date;
	double temp[24];
};

double mean(double temp[], int n){
	n = 24;
	double sum;
	for (int i = 0; i < 24; i++){
		sum += temp[i];
	}
	return sum / n;
}

int main() {
	ifstream fin("temperature.txt");
    ofstream fout("average.txt");
	fout << fixed << setprecision(1);

	Temperature records[365];
	int record_count = 0;

	string line;

	while (getline(fin, line)) {
        stringstream ss(line);
        ss >> records[record_count].date;

        for (int i = 0; i < 24; i++) {
            ss >> records[record_count].temp[i];
        }

        record_count++;
    }

	for (int i = 0; i < record_count; i++) {
        double avgTemp = mean(records[i].temp, 24);
        fout << records[i].date << " " << avgTemp << endl;
    }

    fin.close();
    fout.close();

	return 0;
}