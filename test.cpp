#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string inputString;
    getline(cin, inputString);
    vector<string> stringList;
    string k = ""; // initializize an empty temp string
    for (auto i : inputString) {
        if (i==' ') {
            cout << k << endl;
            k = "";

        } else {
            k=k+i;
        }
    }
    cout << k << endl;
}