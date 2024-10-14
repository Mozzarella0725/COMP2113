#include <iostream>
#include "process_scores.h"
#include <string>
#include <vector>
using namespace std;

double calculate_average(vector<int> all_scores){
    double sum;
    for (int i = 0; i < all_scores.size(); i++){
        sum += all_scores[i];
    }
    return sum / all_scores.size();
}

void find_highest(vector<string> all_names, vector<int> all_scores, string &highest_name, int &highest_score){
    highest_score = all_scores[0];
    for (int i = 0; i < all_scores.size(); i++) {
        if (highest_score < all_scores[i]){
            highest_score = all_scores[i];
            highest_name = all_names[i];
        }
    }
}

void find_lowest(vector<string> all_names, vector<int> all_scores, string &lowest_name, int &lowest_score){
    lowest_score = all_scores[0];
    for (int i = 0; i < all_scores.size(); i++) {
        if (lowest_score > all_scores[i]){
            lowest_score = all_scores[i];
            lowest_name = all_names[i];
        }
    } 
}

int passed_students(vector<int> all_scores){
    int count = 0;
    for (int i = 0; i < all_scores.size(); i++) {
        if (all_scores[i] >= 60) {
            count += 1;
        }
    }
    return count;
}