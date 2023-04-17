#include <stdio.h>
int main() {
    int i, j, k1, k2, k3;

    i=15, j=19;
    k1=(12,23,i,j);
    printf("k1 = %d\n",k1);
    printf("\n");

    k2=i++;
    k3=++j;
    printf("i = %d   k2 = %d\n",i,k2);
    printf("j = %d   k3 = %d\n",j,k3);

    printf("赋值前：i=%d   j=%d   k1=%d   k2=%d   k3=%d\n",i,j,k1,k2,k3);
    i = j = k1 = k2 = k3;
    printf("赋值前：i=%d   j=%d   k1=%d   k2=%d   k3=%d\n",i,j,k1,k2,k3);

    return 0;
}