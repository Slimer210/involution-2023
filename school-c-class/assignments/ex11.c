#include <stdio.h>

int main()
{
    float temp, c;
    scanf("%f", &temp);
    c = (temp-32)*5/9;
    printf("%.0f", c);
    return 0;
}