#include <stdio.h>

int main()
{
    float temp;
    scanf("%f", &temp);
    printf("%.0f", (temp-32)*5/9);
    return 0;
}