#include<stdio.h>
int main() {
    int i=1, j=2, k=0;
    float x=1.13, y=0.85;

    printf("%d,%d\n",i,j);
    printf("%d,%d\n",!i,!j);
    printf("%.2f,%.2f\n",x,y);
    printf("%d,%d\n",!x,!y);
    printf("%d\n",!k);
    printf("%d\n",i++&&j);
    printf("%d\n",++i&&j);

    return 0;
}