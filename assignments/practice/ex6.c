#include <stdio.h>

int main() {
    printf("Data Type\tMemory (bytes) \n");
    printf("short\t\t%d \n", sizeof(short));
    printf("int\t\t%d  \n", sizeof(int));
    printf("long\t\t%d \n", sizeof(long));
    printf("float\t\t%d \n", sizeof(float));
    printf("double\t\t%d \n", sizeof(double));
    printf("long double\t%d \n", sizeof(long double));
    printf("char\t\t%d \n", sizeof(char));
    return 0;
}

/* 
Data Type       Memory (bytes)
short           2
int             4
long            4
float           4
double          8
long double     16
char            1
*/
