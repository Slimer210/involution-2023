#include <iostream>
using namespace std;

int main() {
    int x, count=1;
    cin >> x;
    for (int i=x; i>=2; i--) {
        count*=i;
    }
    cout << count << endl;
}