#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, d=2;
    cin >> x >> y;

    if (floor(x) != x || floor(y) != y || x<0 || y<0) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int a=x, b=y;
    if (a>b) swap(a,b);
    if (a%2==1) a++;
    int n=1+((b-a)/d);
    int Sn = (n/2)*((2*a)+(n-1)*d);
    cout << Sn << endl;
    return 0;
}