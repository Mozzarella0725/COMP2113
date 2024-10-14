#include "process_scores.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char* argv[]){
    if (argc < 2){ // check if no input files
        cout << "error processiong file" << endl;
        return 1;
    }
    
    // store all names and scores
    vector<string> all_names;
    vector<int> all_scores;

    // loop over all input files
    for (int i = 1; i < argc; ++i) {
        string filename = argv[i];
        // open the file
        ifstream file(filename);

        // 1. open the file and check if the file can be opened, print error message and continue if not
        if (!file.is_open()) {
            cout << filename << ":error processing file" << endl;
            continue;
        }

        // declare the lines and initialize the validation
        string line;
        bool valid_data = false;

        // read each line in the file
        while (getline(file, line)) {
            // store the line in iss format to parse data 
            istringstream iss(line);
            string name;
            int score;

            // 2. check if the format is valid. if not, continue on the next line and print error message
            if (!(iss >> name >> score)) {
                cout << filename << ": error processing file" << endl;
                continue;
            }

            // 3. check if the score is valid. if not, continue on the next line and pring error message
            if (score < 0 || score > 100) {
                cout << filename << ": error processing file" << endl;
                continue;
            }

            // at least one pair of data in this file is valid
            valid_data = true;

            // add the name and score to the list
            all_names.push_back(name);
            all_scores.push_back(score);
        }

        // 4. check if the file contains valid data
        if (!valid_data) {
            cout << filename << ": error processing file" << endl;
        }

        file.close();
    }
    
    // set the precision of two decimal places
    cout << fixed << setprecision(2);

    // calculate the average in process_scores and print
    double average = calculate_average(all_scores);
    cout << "Average score: " << average << endl;

    // find highest score
    string highest_name;
    int highest_score;
    find_highest(all_names, all_scores, highest_name, highest_score);
    cout << "Highest score: " << highest_name << " " << highest_score << endl;

    // find lowest score
    string lowest_name;
    int lowest_score;
    find_lowest(all_names, all_scores, lowest_name, lowest_score);
    cout << "Lowest score: " << lowest_name << " " << lowest_score << endl;

    // count on passed students
    int count = passed_students(all_scores);
    cout << "Number of students passed: " << count << endl;

    return 0;
}   