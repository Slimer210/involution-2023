// Usage of Asterisk
#include <stdio.h>
int main() {
    printf("%*d\n", 3, 18); // increase output length to 1, while it's aligned right
    printf("%*d\n", 3, 1799999); //it will increase the output length in case it's not enough space
    printf("%*d\n", 20, 168080); // in these 3 prints you will see that the number is aligned right instead of left
    printf("%*d\n", 20, 1680808);
    printf("%*d\n", 20, 16808008);
    return 0;
}