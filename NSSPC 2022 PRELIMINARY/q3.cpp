#include <bits/stdc++.h>
using namespace std; 

double cf(int x) {
    return ((x*(9.0/5.0))+(32.0));
}

double fc(int x) {
    return (x-1);
}

int main()
{
    float temp;
    char unit;
    
    scanf("%f%c", &temp, &unit);
    
    if (unit=='C') {
        printf("%.1lf%c", cf(temp), 'F');
    } else if (unit == 'F') {
        printf("%.1lf%c", fc(temp), 'C');
    }
    return 0;
}