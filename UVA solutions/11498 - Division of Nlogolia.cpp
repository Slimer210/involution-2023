#include <iostream>
using namespace std;

int main () {
    int k;
    cin >> k;
    int n, m;
    cin >> n >> m;
    while (k--) {
        int x, y;
        cin >> x >> y;
        if (n==x || m==y) printf("divisa\n"); else {
            if (x<n && y>m) {
                printf("NO\n");
            } else if (x>n && y<m) {
                printf("SE\n");
            } else if (x>n && y>m) {
                printf("NE\n");
            } else printf("SO\n");
        }

    }
}