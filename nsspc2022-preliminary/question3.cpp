#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float t;
	char type;
	scanf("%lf %c", &t, &type);
	
	if (type=='F') {
		cout << fixed << setprecision(1) << (t-32)*5/9 << "C" << endl;
	} else {
		cout << fixed << setprecision(1) << (t*9/5) + 32 << "F" << endl;
	}
}
