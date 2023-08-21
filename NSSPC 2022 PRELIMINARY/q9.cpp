#include <iostream>
#include <string>
#include <set>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length()>25) {
        cout << "Invalid Length";
        return 0;
    }
    string ps= "";
    set<string> chem;
    for (char c:s) {
        if (isalpha(c)) {
            ps+=c;
        }
    }
    for (int i=0;i<ps.length();i++) {
        if (isupper(ps[i]) && islower(ps[i+1])) {
            if (!chem.count(ps.substr(i, 2))) {
                cout << ps.substr(i, 2) << " ";
                chem.insert(ps.substr(i, 2));
                i++;
            }
            
        } else if (isupper(ps[i])) {
            if (!chem.count(ps.substr(i, 1))) {
                cout << ps.substr(i, 1) << " ";
                chem.insert(ps.substr(i, 1));
            }
        }
    }
    cout <<endl<< chem.size();
}