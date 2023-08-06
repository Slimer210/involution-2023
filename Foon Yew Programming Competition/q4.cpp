#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector <int> arr;
    for (int i = 1; i<=3; i++) {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end ());
    for (int i = 0; i<=2; i++) {
        cout << arr[i] << " ";
    }
}