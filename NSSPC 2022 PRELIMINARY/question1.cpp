#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, d=2;
    cin >> x >> y;

    // Test fail cases
    if (floor(x) != x || floor(y) != y || x<0 || y<0) {
        cout << "Invalid Input" << endl;
        return 0;
    }

    int a=x, b=y;
    /*
    The following solution requires some knowledge about arithmetic sequence.
    since this is an even sequence, we can conclude that d=2, a1=a, an=b
    */
    if (a>b) swap(a,b);

    // Make a1 be even number so that it can be correctly calculated
    if (a%2==1) a++;

    // Derive n by the an=a+(n-1)d formula. Result: n=1+((an-a)/d)
    int n=1+((b-a)/d);

    // Derive total by using Sn formula, which is S=(n/2)(2a1+(n-1)d)
    int Sn = (n/2)*((2*a)+(n-1)*d);
    cout << Sn << endl;
    // This solution ended up in O(1) complexity :)
    return 0;
}