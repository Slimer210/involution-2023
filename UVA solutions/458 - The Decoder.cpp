#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int count = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)  {
        char c = s[i] - 7;
        cout << c;
    }
}