#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	int a, b;
	cin >> a >> b;
	cout << fixed << setprecision(2) << (tan(b*3.1415/180)*a)+1.8 << endl;
	return 0;
}
