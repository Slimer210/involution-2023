#include <bits/stdc++.h>
using namespace std;
int main () {
    int w, y, m, z;
    cin >> w >> y >> m >> z;
    string mon_val;
    int month = ceil(w/4.42);
    switch (month) {
        case 1:
            mon_val = "January";
            break;
        case 2:
            mon_val = "February";
            break;
        case 3:
            mon_val = "March";
            break;
        case 4:
            mon_val = "April";
            break;
        case 5:
            mon_val = "May";
            break;
        case 6:
            mon_val = "June";
            break;
        case 7:
            mon_val = "July";
            break;
        case 8:
            mon_val = "August";
            break;
        case 9:
            mon_val = "September";
            break;
        case 10:
            mon_val = "October";
            break;
        case 11:
            mon_val = "November";
            break;
        case 12:
            mon_val = "December";
            break;
    }
    cout << mon_val << " " << y << endl;
    cout << floor(((z-y)*12)+((m)-w/4.42)) << endl;

}