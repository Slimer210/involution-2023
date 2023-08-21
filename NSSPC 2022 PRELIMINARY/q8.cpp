#include<iostream>
#include <iomanip>
using namespace std;

int main() {
    double dx, dy, w, v;
    cin >> dx >> dy >> w >> v;
    double d=w/v;
    if (!((d<=dy && d>=dx)||(d>=dy && d<=dx))) {
        cout << "Invalid Input";
        return 0;
    }
    double v1=(w-(dy*v))/(dx-dy);
    double v2=v-v1;
    cout << fixed << setprecision(2) << v1/v*100 << " " << v2/v*100 << endl;
}