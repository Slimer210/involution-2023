#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    printf("1+2+3+4+5+...+%d = %d\n", n, n*(n+1)/2);
    return 0;
}