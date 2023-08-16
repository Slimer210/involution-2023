#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    
    int a, b;
    b=(y-(2*x))/2;
    a=((4*x)-y)/2;
    if (a<0||b<0) {
        cout << "No Feasible Solution" << endl;
        return 0;
    }
    cout << a << endl << b << endl;

}