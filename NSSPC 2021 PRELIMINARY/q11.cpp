#include <iostream>
#include <cmath>
using namespace std;

bool prime(int a) {
    if (a == 1) return false;
    for (int i = 2; i <= round(sqrt(a)); ++i) {
        if (a % i == 0) return false;
    }
    return true;
}


int main() {
    int n;
    cin >> n;
    do {
        if (prime(n)==true) {
            cout << n << endl;
            return 0;
        }
    } while (n--);
}