#include <stdio.h>

int main() {
    int rows, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        // Print spaces
        for (space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= rows; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
