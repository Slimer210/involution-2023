#include<stdio.h>
int main() {
    int ex[7];
    int i, sum=0, max;
    for (i=0; i<7; i++) {
        printf("Exercise %d :", i+1);
        scanf("%d", &ex[i]);
        if (i==0 || ex[i]>max) max=ex[i];
        sum+=ex[i];
    }
    printf("maximum = %d\n",  max);
    printf("sum = %d\n", sum);
    printf("average = %d\n", sum/i);
    return 0;
}
