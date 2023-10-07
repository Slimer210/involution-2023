#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 4; i++)
    {
        int j, k;
        for (j = 0; j < 3 - i; j++)
            printf(" ");
        for (k = 1; k <= (i * 2) + 1; k++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i < 4; i++)
    {
        int j, k;
        for (k = 0; k < i; k++)
            printf(" ");
        for (k = 0; k < 7 - (i * 2); k++)
            printf("*");
        printf("\n");
    }
}