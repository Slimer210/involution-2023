#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float x, y;
    cin >> x >> y;
    float t95=2.05*y, t97=3.37*y, t100=4.70*y;
    if (x>=t100) {
        cout << fixed << setprecision(2) << "100 " << x-t100 << endl;
    } else if (x>=t97) {
        cout << fixed << setprecision(2) << "97 " << x-t97 << endl;   
    } else if (x>=t95) {
        cout << fixed << setprecision(2) << "95 " << x-t95 << endl;
    } else {
        cout << "0" << endl;
    }

    
}