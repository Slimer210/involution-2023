#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        map<char, int> charmap;
        int k, total=0;
        cin >> k;
        cin.ignore();
        while (k--) {
            char x;
            int y;
            cin >> x;
            cin >> y;
            charmap[x] = y;
        }
        int m;
        cin >> m;
        cin.ignore();
        while(m--) {
            string s;
            getline(cin, s);
            for (int i = 0; i < s.size(); i++) {
                total+=charmap[s[i]];
            }
        }
        float value = (total/100.0);
        printf("%.2f$\n", value);
    }
    return 0;
}