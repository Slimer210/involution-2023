#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int weight;
	double height;
	cin >> weight;
	cin >> height;
	
	double bmi=(weight)/(height*height);
	cout << fixed << setprecision(2) << bmi << endl;
	if (bmi<20) printf("Underweight\n"); else
	if (bmi<25) printf("Healthy Weight\n"); else
	if (bmi<30) printf("Overweight\n"); else
	printf("Obesity\n");
	return 0;
}
