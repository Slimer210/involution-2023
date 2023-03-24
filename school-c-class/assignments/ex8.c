// FOR REFERNCE ONLY
#include<stdio.h>
int main() {
    int a, b; float x, y; // 忘了declare所以在写在同一行
    printf("请输入2个整数：\n");
    scanf("%d %d", &a, &b);
    printf("\n请输入2个浮点数：\n");
    scanf("%f %f", &x, &y);
    printf("\n你所输入的资料为：\n");
    printf("A\tB\tX\tY\n%d\t%d\t%.2f\t%.2f\n", a, b, x, y);
    return 0;
}