#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	string sample = "codeforces";
	while (t--) {
		int n, min_a=2000001, min_b=2000001, min_all=2000001;
        cin >> n;
        int m;
        for (int i = 0; i < n; i++) {
            int temp1;
            string temp2;
            cin >> temp1;
            cin >> temp2;
            int bin_total;
            bin_total = int(temp2[0] - '0') * 2 + (temp2[1] - '0');
            switch (bin_total) {
                case 1:
                    if (temp1<min_b) min_b=temp1;
                    break;
                case 2:
                    if (temp1<min_a) min_a=temp1;
                    break;
                case 3:
                    if (temp1<min_all) min_all=temp1;
                    break;
                case 0:
                    break;
            }
        }
        if ((min_a>=2000001 || min_b>=2000001) && min_all>=2000001) {
            cout << -1 << endl;
        } else {
            if((min_a+min_b) < min_all) {
                cout << (min_a+min_b) << endl;
            } else {
                cout << min_all << endl;
            }
        }
        
        


	}
	return 0;
}
