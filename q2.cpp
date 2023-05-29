#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	string sample = "codeforces";
	while (t--) {
		int n, count = 0, max=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[i]=x;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                count++;
                if (count > max) max = count;
            } else {
                count = 0;
            }
        }
        cout << max << endl;
        

	}
	return 0;
}
