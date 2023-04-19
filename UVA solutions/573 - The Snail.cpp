#include <iostream>
#include <cmath>
using namespace std;

// H is the height of the well in feet, 
// U is the distance in feet that the snail can climb during the day, 
// D is the distance in feet that the snail slides down during the night, 
// F is the fatigue factor expressed as a percentage. 

int main() {
    double h=0, u=0, d=0, f=0;
    while (cin >> h >> u >> d >> f) {
        if (round(h) == 0) return 0;
        double current=0, fatigue=u*f/100;
        int day = 1;
        while (true) {
            
            current+=u;
            if (current > h) {
                printf("success on day %d\n", day);
                break;
            }
            current -= d;
            if (current < 0) current = 0;
            u -= fatigue;
            if (u < 0) u = 0;
            day++;
            if (round(current) == 0) {
                printf("failure on day %d\n", day);
                break;
            } 
        }
    }
    return 0;
}