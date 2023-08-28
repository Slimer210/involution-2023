#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    
    if (x%2!=0 || y%2!=0 || (y-(2*x))%4!=0 || ((4*x)-y)%4!=0) {
        cout << "Invalid input" << endl;
        return 0;
    }
    if ((y-(2*x))/4<0 || ((4*x)-y)/4<0) {
        cout << "Invalid input" << endl;
        return 0;
    }
    cout << (y-(2*x))/4 << endl << ((4*x)-y)/4 << endl;
}