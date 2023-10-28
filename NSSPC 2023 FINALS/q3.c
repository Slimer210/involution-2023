#include <stdio.h>

int main() {
    int h, m, n;
    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &n);

    int d = 0; 

    while (1) {
        d++; 
        h -= m;
        if (h <= 0) {
            printf("%d\n", d);
            break; // reached or exceeded the top
        }
        h += n;
    }
    return 0;
}
