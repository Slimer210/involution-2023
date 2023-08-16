#include <iostream>
#include <string>
using namespace std;

int main() {
    string n;
    cin >> n;
    while (n.length()>=2) {
        int count=0;
        for (int i=0; i<n.length(); i++) {
            int temp = stoi(n.substr(i,1));
            count+=temp;
        }
        n=to_string(count);
    }
    cout << n << endl;
}