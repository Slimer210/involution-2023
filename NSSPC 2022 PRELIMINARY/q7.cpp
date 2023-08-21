#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a+b<=c || a+c<=b || b+c<=a) {
        cout << "Invalid";
        return 0;
    }
    if (a==b && b==c) {
        cout << "Equilateral Triangle" << endl;
    } else if (a==b || b==c || a==c) {
        cout << "Isosceles Triangle" << endl;
    } else {
        cout << "Scalene Triangle" << endl;
    }

    double s = (a+b+c)/2;
    cout << fixed << setprecision(0) << sqrt(s*(s-a)*(s-b)*(s-c)) << endl;


}