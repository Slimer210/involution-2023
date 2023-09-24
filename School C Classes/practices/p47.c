#include <stdio.h>
int main() {
    int input, replay;
    do {
        printf("\nEnter a number: ");
        scanf("%d", &input);
        if (input%2==0) printf("%d is an even number\n\n", input);
        else printf("%d is an odd number\n\n", input);
        printf("Do you want to try again? (1 for yes, 0 for no): \n");
        scanf("%d", &replay);
    } while (replay==1);
    return 0;
}