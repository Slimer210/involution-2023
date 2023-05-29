#include <bits/stdc++.h>
using namespace std;

float freeFallMotion(float h) {
    float t = sqrt((2.0*h)/9.8);
    return t;
}

int main() {
    float input;
    scanf("%f", &input);
    cout << fixed << setprecision(2) << freeFallMotion(input) << endl;
    return 0;
}