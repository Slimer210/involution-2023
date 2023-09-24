#include <stdio.h>
int main() {
    int a=0,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n--) printf("%d\n", a++*2);
    return 0;
}