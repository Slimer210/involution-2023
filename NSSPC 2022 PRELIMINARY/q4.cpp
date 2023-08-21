#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
		const double ctemp = 2800 / (99.0 + 273.15);
		double t;
		cin >> t;
		printf("%.7lf\n", (t+273.15)*ctemp);
	}
}
