#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
float twodet(float w, float x, float y, float z) {
    return (w*z)-(x*y);
}

float threedet(float a, float b, float c, float d, float e, float f, float g, float h, float i) {
    return (a*twodet(e, f, h, i)) - (b*twodet(d, f, g, i)) + (c*twodet(d, e, g, h));
}

int main() {
    float a1, a2, a3, b1, b2, b3, c1, c2, c3, a, b, c;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> c1 >> c2 >> c3 >> a >> b >> c;
    float native_det = threedet(a1, a2, a3, b1, b2, b3, c1, c2, c3);
    float detx = threedet(a, a2, a3, b, b2, b3, c, c2, c3);
    float dety = threedet(a1, a, a3, b1, b, b3, c1, c, c3);
    float detz = threedet(a1, a2, a, b1, b2, b, c1, c2, c);
    cout << fixed << setprecision(0) << (round(detx/native_det)==-0.0 ? abs(round(detx/native_det)): round(detx/native_det)) << " " << (round(dety/native_det)==-0.0 ? abs(round(dety/native_det)): round(dety/native_det)) << " " << (round(detz/native_det)==-0.0 ? abs(round(detz/native_det)): round(detz/native_det)) << endl;
}