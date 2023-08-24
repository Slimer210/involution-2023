#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	string s;
	cin >> s;
	int vl = 0;
	for (int i = 0;i<s.length(); i++) {
		if (isupper(s[i])) {
			vl+=26;
			break;
		}
	}
	for (int i = 0;i<s.length(); i++) {
		if (islower(s[i])) {
			vl+=26;
			break;
		}
	}
	for (int i = 0;i<s.length(); i++) {
		if (isdigit(s[i])) {
			vl+=10;
			break;
		}
	}
	for (int i = 0;i<s.length(); i++) {
		if (ispunct(s[i])) {
			vl+=32;
			break;
		}
	}
	cout << fixed << setprecision(0) << pow(vl, s.length()) << endl;
	return 0;
}
