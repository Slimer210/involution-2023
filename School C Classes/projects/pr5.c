#include <stdio.h>
int main() {
    int i;
    for (i = 0; i < 4; i++) {
        int j;
        for (j = 0; j < 3 - i; j++) printf(" ");
        for (j = 1; j <= (i * 2) + 1; j++) printf("*");
        printf("\n");
    }
    for (i = 1; i < 4; i++) {
        int j;
        for (j = 0; j < i; j++) printf(" ");
        for (j = 0; j < 7 - (i * 2); j++) printf("*");
        printf("\n");
    }
}