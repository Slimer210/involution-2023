#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int a, b, c, x, y, z, A=0, B=0, C=0, minimum=0;
    scanf("%d %d %d", &a, &b, &c);
    scanf("%d %d %d", &x, &y, &z);
    if (a<0 or b<0 or c<0 or x<=0 or y<=0 or z<=0 or floor(a+b+c+x+y+z)!=a+b+c+x+y+z) {
        printf("Invalid Input\n");
        exit(0);
    }

    A=a/x; B=b/y; C=c/z;
    minimum=min(min(A, B), min(B, C));
    printf("%d\n", minimum);
    printf("%d %d %d\n", a-(minimum*x), b-(minimum*y), c-(minimum*z));
    
}