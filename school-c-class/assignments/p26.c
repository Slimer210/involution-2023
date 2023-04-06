#include <stdio.h>

int main()
{
    int x=23, y=26, n;
    n=x<y;
    printf("%d\n", n);
    n=x==y-1;
    printf("%d\n", n);
    n=('y' != 'Y');
    printf("%d\n", n);
    return 0;
}