#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, count=0;
    double x, a;
    cin >> n >> x;
    int temp=n;
    vector<double> v;

    while (temp--) {
        cin >> a;
        v.push_back(a);
    }
    while (v.size()) {
        count++;
        double int_pos = v.front();
        for (int i=0; i<v.size(); i++) {
            if (v[i]==int_pos) {
                v.erase(v.begin()+i);
                i--;
                int_pos-=x;
            }
            
        }
        
    }
    cout << count << endl;
}