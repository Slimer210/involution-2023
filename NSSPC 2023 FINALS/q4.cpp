#include <bits/stdc++.h>
using namespace std;
int main() {
	string s1, s2;
	getline(cin, s1);
	for (int i=0;i<s1.size();i++) {
		if (s1[i]==' ') {
			s1.erase(i, 1);
			i--;
		}
	}
	getline(cin, s2);
	for (int i=0;i<s2.size();i++) {
		if (s2[i]==' ') {
			s2.erase(i, 1);
			i--;
		}
	}
	sort (s1.begin(), s1.end());
	sort (s2.begin(), s2.end());
	if (!s1.compare(s2)) {
		cout << "anagram" << endl;
	} else {
		cout << "not anagram" << endl;
	}
	
}
