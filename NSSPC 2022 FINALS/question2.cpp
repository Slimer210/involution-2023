#include <iostream>
#include <algorithm>
#include <vector>
#include <ranges>
using namespace std;

int main() {
    int countr, a;
    cin >> countr;

    vector<int> v;

    while (countr--) {
        cin >> a;
        v.push_back(a);
    }

    int minimum = *min_element(v.begin(), v.end());
    int maximum = *max_element(v.begin(), v.end());
    int minCount = count(v.begin(), v.end(), minimum);
    int maxCount = count(v.begin(), v.end(), maximum);    

    for (auto i = v.begin(); i != v.end(); ++i) {
        if (*i == maximum || *i == minimum) {
            v.erase(i);
            i--;
        }
    }
    while (minCount--) {
        v.insert(v.begin(), minimum);
    }
    while (maxCount--) {
        v.insert(v.end(), maximum);
    }
    for (auto &p : v)
    {
        cout << p << " ";
    }
}