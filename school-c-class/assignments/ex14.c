#include <stdio.h>
int main() {
    int a, b, c;
    a=1, b=2, c=a+b+3;
    printf("%d,%d,%d\n", a, b, c);
    c=(a++,a+=b,a+b+1);
    printf("%d,%d,%d\n", a, b, c);
    return 0;
}