#include <stdio.h>
int main() {
    int x = 2, y = 3;

    printf("(0) x= %d y=%d\n", x, y);

    x+=y;
    printf("(1) x= %d\n", x);

    x-=y;
    printf("(2) x= %d\n", x);

    x*=y;
    printf("(3) x= %d\n", x);

    x/=y;
    printf("(4) x= %d\n", x);

    x*=3+2;
    printf("(5) x= %d\n", x);

    return 0;
}