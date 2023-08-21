#include <iostream>
#include <cmath>
#include <cctype>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	double m;
	double c;
	double ca = 1;
	double cb = -2;
	double cc = -3;
	cin >> m >> c;
	scanf("%lf %lf", &m, &c);
	cb-=m;
	cc-=c;
	double det = (cb*cb)-(4*ca*cc);
	if (det<0) {
		cout << "No intersection" << endl;
		return 0;
	} else if(det==0) {
		cout << "One intersection" << endl;
		double x = ((-cb))/(2*ca);
		
		printf("%.7lf, %.7lf\n", x, (x*x + -2*x -3));
	} else {
		cout << "Two intersections" << endl;
		double x1 = ((-cb)+sqrt(det))/(2*ca);
		double y1 = x1*x1 + -2*x1 -3;
		double x2 = ((-cb)-sqrt(det))/(2*ca);
		double y2 = x2*x2 + -2*x2 -3;
		printf("%.7lf, %.7lf\n", x1, y1);
		printf("%.7lf, %.7lf\n", x2, y2);
	}
}
