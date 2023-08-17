#include <iostream>
using namespace std;

int main() {
	int a, n;
	cin >> a >> n;
	while (n--) {
		a*=5;
		a+=7;
	}
	cout << a << endl;
}
