// process_scores.h

#ifndef PROCESS_SCORES_H
#define PROCESS_SCORES_H

#include <string>
#include <vector>
using namespace std;

double calculate_average(vector<int> all_scores);
void find_highest(vector<string> all_names, vector<int> all_scores, string &highest_name, int &highest_score);
void find_lowest(vector<string> all_names, vector<int> all_scores, string &lowest_name, int &lowest_score);
int passed_students(vector<int> all_scores);

#endif
