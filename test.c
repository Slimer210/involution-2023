#include <stdio.h>
int main() {
    // printf("    I can\'t\b\b  \rYES");
    printf("No, I can't");
    printf("\b");
    printf("\b");
    printf("!");
    printf("!");
    printf("\r");
    printf("YES");

    return 0;
}

// \b = backspace (move cursor to 1 character behind)
// \r = return (move cursor to the first character in the line)
// \n = newline