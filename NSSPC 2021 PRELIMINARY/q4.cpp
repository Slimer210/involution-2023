#include<iostream>
#include <iomanip>
using namespace std;

int main() {
	double r,h;
	cin >> r >> h;
	cout <<fixed << setprecision(2)<< (2*3.14*r*h)+(2*3.14*r*r)<<endl;
	
}
