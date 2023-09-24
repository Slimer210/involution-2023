#include <bits/stdc++.h>
using namespace std;

long long int gcd(long long int a, long long int b) {
	if (b==0) return a;
	return gcd(b, a%b);
}

long long int lcm(long long int a, long long int b) {
	return (a*b)/gcd(a, b);
}

int main() {
	int x;
	cin >> x;
	long long int total_gcd;
	long long int total_lcm = 1;
	for (int i=0;i<x;i++) {
		long long int lol;
		cin >> lol;
		if (i==0) total_gcd = lol;
		total_gcd=gcd(total_gcd, lol);
		total_lcm=lcm(total_lcm, lol);
	}
	
	cout << total_gcd << endl << total_lcm << endl;
}
