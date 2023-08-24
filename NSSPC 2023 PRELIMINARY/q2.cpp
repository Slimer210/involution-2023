#include <bits/stdc++.h>
using namespace std;

int fac(int n) {
	int f=1;
	for (int i=1; i<=n; i++) {
		f*=i;
	}
	return f;
}

int main() {
	cin.tie(NULL);
	set<char> charset;
	
	int n;
	cin >> n;
	while (n--) {
		char x;
		cin >> x;
		charset.insert(x);
	}
	cout << fac(charset.size()) <<endl;
	return 0;
}
