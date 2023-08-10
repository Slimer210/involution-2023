#include<iostream>
#include <algorithm>
using namespace std;

long long int lcm(int a, int b) {
	int greater = max(a, b);
	int minimum = min(a, b);
	for (long long int i=greater; ; i+=greater) {
		if (i%minimum==0) {
			return i;
		}
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << lcm(a, lcm(b, c));
}
