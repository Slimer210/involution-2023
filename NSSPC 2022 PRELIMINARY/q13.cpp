#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;

int main () {
    vector<int> v;
    int x;
    cin >> x;
    int t=20, count=0;
    while (v.size()<20) {
        int temp;
        cin >> temp;
        if (temp>=-100 && temp<=100) v.push_back(temp);
    }
    sort(v.begin(), v.end());
    set<int> pairedInt;
    for (int i=0; i<v.size();i++) {
        for (int j=i+1; j<v.size();j++) {
            if (v[i]+v[j]==x) {
                pairedInt.insert(v[i]);
                pairedInt.insert(v[j]);
                count++;
            }
        }
    }
    if (pairedInt.size()%2==1) {
        int pairedInt_temp = (pairedInt.size()+1)/2;
        cout << pairedInt_temp << endl;
    } else {
        int pairedInt_temp = pairedInt.size()/2;
        cout << pairedInt_temp << endl;
    }
    
}