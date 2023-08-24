#include <bits/stdc++.h>
using namespace std;
int main() {
	cin.tie(NULL);
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	int totalApples = c/d; 
	totalApples += (totalApples / a) * b;
	cout << totalApples << endl;
	return 0;
}

