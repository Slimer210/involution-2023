#include <stdio.h>
int main() {
    int i=6, j=6, k=6, h=6, m,n,x,y;
    m=i++;
    n=++j;
    x=k--;
    y=--h;
    printf("\n i=%d, m=%d, j=%d, n=%d", i, m, j, n);
    printf("\n k=%d, x=%d, h=%d, y=%d\n", k, x, h, y);

    return 0;
}