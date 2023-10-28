#include <stdio.h>
int main(void) {
    int d, m, y;
    scanf("%d %d %d", &d, &m, &y);
    printf("%d", d);
    switch(d) {
        case 1: printf("st"); break;
        case 2: printf("nd"); break;
        case 3: printf("rd"); break;
        case 21: printf("st"); break;
        case 22: printf("nd"); break;
        case 23: printf("rd"); break;
        case 31: printf("st"); break;
        default: printf("th"); break;
    }
    printf(" ");
    switch(m) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        case 4: printf("April"); break;
        case 5: printf("May"); break;
        case 6: printf("June"); break;
        case 7: printf("July"); break;
        case 8: printf("August"); break;
        case 9: printf("September"); break;
        case 10: printf("October"); break;
        case 11: printf("November"); break;
        case 12: printf("December"); break;
    }
    printf(", ");
    printf("%d", y);
    return 0;

}