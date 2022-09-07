// testcases:
// "Someone's been sitting in my chair and they've broken it to pieces," cried the Baby bear. They decided to look around some more and when they got upstairs to the bedroom, "Someone's been sleeping in my bed and she's still there!" exclaimed the Baby bear.

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> split(string str) {
    vector<string> parsed;
    string temp = " ";
    for (int i=0; i<str.length(); i++) {
        if (str[i] == ' ') {
            parsed.push_back(temp);
            temp = "";
        } else {
            temp += str[i];
        }
    }
    parsed.push_back(temp);
    return parsed;
}

int main() {
    string para;
    getline(cin, para);

    string vowel = "AEIOU";

    para.erase(remove_if(para.begin(), para.end(), [](char test) {return !isalpha(test) && test != ' ' && test !='-' && test !='\'';}), para.end());
    transform(para.begin(), para.end(), para.begin(), ::toupper);

    vector<string> wordList = split(para);

    int counter;
    for (string x : wordList) {
        int c=count_if(x.begin(), x.end(), [vowel](char c) {return count(vowel.begin(), vowel.end(), c)>0;});

        if (c>2) {
            cout << x << endl;
            counter++;
        }

    }
    printf("%i\n", counter);
}