#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    while (true) {
        int n, m;
        char current;
        cin >> n >> m;
        if(n==0 || m==0) break;
        char minefield[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                char k;
                cin >> k;
                minefield[i][j] = k;
            }
        }
        // i = straight
        // j = vertical
        current = '0';
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (minefield[i][j] == '*') {
                    printf("*");
                } else {
                    int count = 0;
                    for (int x = i-1; x <= i+1; x++) {
                        for (int y = j-1; y <= j+1; y++) {
                            if (x >= 0 && x < n && y >= 0 && y < m && minefield[x][y] == '*') {
                                count++;
                            }
                        }
                    }
                    cout << count;
                }
                // cout << minefield[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}