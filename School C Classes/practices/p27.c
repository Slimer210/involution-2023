#include <stdio.h>
int main() {
    int m=0, n=1, x=1;
    int k;
    k = m && n;
    printf("%d\n", k);
    k = m && n && x;
    printf("%d\n", k);
    k = m || n;
    printf("%d\n", k);
    k = m || n || x;
    printf("%d\n", k);
    k = !m && n;
    printf("%d\n", k);
    k = !(m && n);
    printf("%d\n", k);

    return 0;
}