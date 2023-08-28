#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length()!=18) {
        cout << "Invalid input" << endl;
        return 0;
    }
    if (stoi(s.substr(0, 3))>=1 && stoi(s.substr(0, 3))<=256) {
        if (s[4]=='M' || s[4]=='T' || s[4]=='W' || s[4]=='w' || s[4]=='t' || s[4]=='m') {
            if (s[5]=='I' || s[5]=='A' || s[5]=='B' || s[5]=='i' || s[5]=='a' || s[5]=='b') {
                if ((stoi(s.substr(7,1))+stoi(s.substr(9,1))+stoi(s.substr(11,1)))%3==0) {
                    if (stoi(s.substr(16, 2))>18 && stoi(s.substr(16, 2))<24 && isalpha(s[16] && isalpha(s[17]))) {
                        cout << "Valid" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "Invalid" << endl;
    return 0;
}