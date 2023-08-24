#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int r, c;
    cin >> r >> c;

    int arr[r][c];
    for (int i=0; i<r; i++) {
        for (int j=0; j<r; j++) {
            int temp;
            cin >> temp;
            arr[i][j]=temp;
        }
    }
    int max_pos=min(r, c);
    return 0;
}