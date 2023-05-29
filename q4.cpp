#include <iostream>
#include <set>
#include <string>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	string sample = "codeforces";
	while (t--) {
        int n=0, m=0;
        cin >> n >> m;
        if (m>n) {
            cout << "NO" << endl; 
        } else {
            if (n/2==m) {
                cout << "NO" << endl;
            } else {
                if (n/3!=floor(n/3)) {
                    cout << "NO" << endl;
                } else {
                    cout << "YES" << endl;
                }
            }
        }
	}
	return 0;
}
