#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    string inputString;
    getline(cin, inputString);
    inputString.erase(remove(inputString.begin(), inputString.end(), ','), inputString.end());
    inputString.erase(remove(inputString.begin(), inputString.end(), '.'), inputString.end());
    inputString.erase(remove(inputString.begin(), inputString.end(), '?'), inputString.end());
    transform(inputString.cbegin(), inputString.cend(), inputString.begin(), [](unsigned char c) { return std::toupper(c); });

    set<string> stringList;
    string k = ""; // initializize an empty temp string
    for (auto i : inputString) {
        if (i==' ') {
            stringList.insert(k);
            k = "";

        } else {
            k=k+i;
        }
    }
    stringList.insert(k);
    cout << stringList.size() << endl;
    for (string x : stringList) {
        cout << x << endl;
    }
}