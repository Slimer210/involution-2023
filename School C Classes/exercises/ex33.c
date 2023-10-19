#include <stdio.h>
//ex33
int main()
{
    int ex[7];
    int i, sum=0;
    for (i=0; i<7; i++) {
        printf("Exercise %d :", i+1);
        scanf("%d", &ex[i]);
        sum+=ex[i];
    }
    printf("sum = %d\n", sum);
    printf("average = %d\n", sum/i);
    return 0;
}
