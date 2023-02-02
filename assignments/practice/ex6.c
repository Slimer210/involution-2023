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
