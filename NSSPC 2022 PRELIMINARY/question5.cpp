#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	int count = 0;
	getline(cin, s);
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	for (int i = 0;i<s.length(); i++) {
		if (s[i] == 'c' || s[i] == 'e' || s[i] == 'g' || s[i] == 'k' || s[i] == 'm' || s[i] == 'q' || s[i] == 's' || s[i]=='w') {
			count+=(s[i])-96;
		}
		if (count>100) {
			cout << "Invalid Length";
			return 0;
		}
	}
	cout << count << endl;
	return 0;
}
