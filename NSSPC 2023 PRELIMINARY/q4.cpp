#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int numCharacters;
    cin >> numCharacters;

    unordered_map<char, int> charCount;
    int maxCount = 0;

    for (int i = 0; i < numCharacters; ++i) {
        char c;
        cin >> c;
        charCount[c]++;
        if (charCount[c] > maxCount) {
            maxCount = charCount[c];
        }
    }

    vector<char> mostCommonChars;

    for (const auto &entry : charCount) {
        if (entry.second == maxCount) {
            mostCommonChars.push_back(entry.first);
        }
    }
    for (char c : mostCommonChars) {
        cout << c << " ";
    }

    
    return 0;
}

