#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    int count = 0;
    getline(cin, s);
    for (int i = 0; i < s.size(); i++)  {
        if (s[i] == '"') {
            count++;
            if (count%2==1) {
                cout << "``";
            } else {
                cout << "''";
            }
            
        } else {
            cout << s[i];
        }
    }
}