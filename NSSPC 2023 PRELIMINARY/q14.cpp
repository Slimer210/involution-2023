#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    switch (t) {
        case 1:
            double x;
            cin >> x;
            if (x<=0) {
                cout << "Invalid" << endl;
                return 0;
            }
            cout << fixed << setprecision(4) << sqrt(pow(x, 2)-pow(x/2, 2)) << endl;
            break;
        case 2:
            double y, z;
            cin >> y >> z;
            if (2*y<=z) {
                cout << "Invalid" << endl;
                return 0;
            }
            cout << fixed << setprecision(4) << sqrt(pow(y, 2)-pow(z/2, 2)) << endl;
            break;
        case 3:
            double a, b, c;
            cin >> a >> b >> c;
            if (a+b<=c || a+c<=b || b+c<=a) {
                cout << "Invalid" << endl;
                return 0;
            }
            double s = (a+b+c)/2;
            cout << fixed << setprecision(4) << (2*sqrt(s*(s-a)*(s-b)*(s-c)))/a << endl;
            break;
    }
}