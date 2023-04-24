#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int b, s, casecount = 0;
    while (cin >> b >> s) {
        if (b==0&&s==0) break;
        vector<int> bachelor(b);
        vector<int> spinster(s);

        for(int i = 0; i < b; i++) {
            cin >> bachelor[i];
        }
        for(int i=0; i < s; i++) {
            cin >> spinster[i];
        }
        sort(bachelor.begin(),bachelor.end());

        if (b<=s) {
            cout << "Case " << ++casecount << ": 0\n";
        } else {
            cout << "Case " << ++casecount << ": " << b-s << " " << bachelor[0] << endl;
        }

    }
}