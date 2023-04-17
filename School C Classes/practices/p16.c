#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers, separate with comma:\n");
    scanf("%d,%d", &a, &b);
    printf("%d%d\n", a, b);
    return 0;
}