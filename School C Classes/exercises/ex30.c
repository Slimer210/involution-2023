#include <stdio.h>
int main() {
    const int pw=15;
    int temp;
    do {
        printf("Type the secret code number to enter.\n");
        scanf("%d", &temp);
    } while (temp!=pw);
    printf("Well done , you can now enter\n");
}