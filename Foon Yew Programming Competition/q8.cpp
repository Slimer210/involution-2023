#include <iostream>
#include <string>
using namespace std;

int main() {
    string ic;
    cin >> ic;
    string year = ic.substr(0, 2);
    int month = stoi(ic.substr(2, 2));
    int day = stoi(ic.substr(4, 2));
    int state = stoi(ic.substr(6, 2));
    int year2 = stoi(ic.substr(8, 1)); //49=1
    int gender = stoi(ic.substr(11, 1));

    string mon_val, day_val, year_val;
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
    switch(day) {
        case 1:
            day_val = "st";
            break;
        case 2:
            day_val = "nd";
            break;
        case 3:
            day_val = "rd";
            break;
        case 21:
            day_val = "st";
            break;
        case 22:
            day_val = "nd";
            break;
        case 23:
            day_val = "rd";
            break;
        case 31:
            day_val = "st";
            break;
        default:
            day_val = "th";
            break;
    }
    if (year2==1 || year2==0 || year2==2) {
        year_val.append("20");
    } else {
        year_val.append("19");
    }
    string gender_val;
    if (gender%2==1) {
        gender_val = "Male";
    } else {
        gender_val = "Female";
    }
    year_val.append(ic.substr(0, 2));
    cout << ic.substr(4, 2) << day_val << " " << mon_val << " " << year_val << ", " << gender_val;

}