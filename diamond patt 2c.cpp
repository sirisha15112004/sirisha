#include <stdio.h>

int main() {
    int n = 5; // Number of rows for the diamond
    int space, i, j;

    space = n - 1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");

        space--;

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }

    space = 1;

    for (i = 1; i <= n - 1; i++) {
        for (j = 1; j <= space; j++)
            printf(" ");

        space++;

        for (j = 1; j <= 2 * (n - i) - 1; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

   
