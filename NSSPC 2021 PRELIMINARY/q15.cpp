#include <iostream>
using namespace std;

int main() {
    int n;
    char c;
    cin >> n >> c;
    for (int i = 1; i<=n; i++) {
        for (int j=0; j<n-i; j++) {
            cout << " ";
        } 
        for (int j=1; j<=(2*i)-1; j++) {
            cout << c;
        } 
        cout << endl;
    }


    for (int i = 1; i<=n; i++) {
        for (int j=n-1; j>0; j--) {
            cout << " ";
        }  
        cout << c;
        for (int j=n-1; j>0; j--) {
            cout << " ";
        }    
        cout << endl;
    }

}