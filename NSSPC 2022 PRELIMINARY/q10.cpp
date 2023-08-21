#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    bool is_modified = true;
    while (is_modified) {
        is_modified=false;
        for (int i = 0; i < s.length()-1; i++) {
            if (s[i] == s[i + 1]) {
                s.erase(i, 2);
                i-=2;
                is_modified = true;
            }
        }
    } 
    cout << s << endl;
}