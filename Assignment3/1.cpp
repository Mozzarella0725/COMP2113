#include <iostream>
#include <map>
#include <string>
#include <unordered_set>
using namespace std;

void countFrequencies(const string &input, map<char, int> &freqMap) {
    for (char ch : input) {
        freqMap[ch]++;
    }
}

string getUniqueSequence(const string &input) {
    unordered_set<char> seen;
    string uniqueSequence;

    for (char ch : input) {
        if (seen.find(ch) == seen.end()) {
            uniqueSequence += ch;
            seen.insert(ch);
        }
    }
    return uniqueSequence;
}

void printFrequencies(const map<char, int> &freqMap) {
    for (const auto &entry : freqMap) {
        cout << entry.first << ": " << entry.second << endl;
    }
}

int main() {
    string input;
    getline(cin, input); 

    map<char, int> freqMap;
    countFrequencies(input, freqMap);

    string uniqueSequence = getUniqueSequence(input);

    printFrequencies(freqMap);

    cout << uniqueSequence << endl;

    return 0;
}
