#include <stdio.h>

// Pyramid star pattern
int main() {
    int i, j, space;

    for(i = 1; i <= 5; i++) {

        // spaces
        for(space = 1; space <= 5 - i; space++) {
            printf(" ");
        }

        // stars
        for(j = 1; j <= (2*i - 1); j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
