#include <stdio.h>
int main() {
    int n=8;
    while (n--) {
        int k=n;
        while (k--) printf(" *");
        printf("\n");
    }
}