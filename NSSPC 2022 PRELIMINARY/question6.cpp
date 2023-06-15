#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int m;
	int c;
	int ca = 1;
	int cb = -2;
	int cc = -3;
	cin >> m >> c;
	cb+=m;
	cc+=c;
	double det = (cb*cb)-(4*ca*cc);
	if (det<0) {
		cout << "No intersections" << endl;
		return 0;
	} else if(det==0) {
		cout << "One intersection" << endl;
		double x = ((-cb)+sqrt(det))/(2*ca);
		printf("%.7lf\n", x);
	} else {
		cout << "Two intersections" << endl;
		double x1 = ((-cb)+sqrt(det))/(2*ca);
		double x2 = ((-cb)-sqrt(det))/(2*ca);
		printf("%.7lf\n%.7lf\n", x1, x2);
	}
}
