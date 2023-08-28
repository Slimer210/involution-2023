#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    string new_n = "";
    if (n.length()%2==0) {
        for (int i=1; i<n.length()+1; i+=2) {
            new_n+=n[i];
        }
        for (int i=n.length(); i>=0; i-=2) {
            new_n+=n[i];
        }
    } else {
        for (int i=1; i<n.length()+1; i+=2) {
            new_n+=n[i];
        }
        for (int i=n.length()-1; i>=0; i-=2) {
            new_n+=n[i];
        }
    }
    cout << stoi(new_n) << endl;
    cout << pow(stoi(new_n), 2) << endl;
    string lol = to_string(pow(stoi(new_n), 2));
    cout << lol << endl;
}