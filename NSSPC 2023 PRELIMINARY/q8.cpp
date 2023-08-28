#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
#include <algorithm>

using namespace std;

string cleanWord(const string &word) {
    string cleaned = "";
    for (char c : word) {
        if (isalnum(c) || c == '-') {
            cleaned += c;
        }
    }
    return cleaned;
}

int main() {
    string paragraph = "";
    int n;
    getline(cin, paragraph);
    cin >> n;

    transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);

    unordered_map<string, int> wordFreq;
    istringstream iss(paragraph);
    string word;
    
    while (iss >> word) {
        word = cleanWord(word);
        if (!word.empty()) {
            wordFreq[word]++;
        }
    }

    int uniqueWords = 0;
    int wordsAboveN = 0;

    for (const auto &entry : wordFreq) {
        if (entry.second >= n) {
            wordsAboveN++;
        }
        uniqueWords++;
    }

    cout << uniqueWords << " " << wordsAboveN;

    return 0;
}
