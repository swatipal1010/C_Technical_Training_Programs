#include <stdio.h>

int main() {
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Print inverted hollow triangle
    for (i = rows; i >= 1; i--) {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++)
            printf(" ");

        // Print asterisks for the boundary
        for (j = 1; j <= 2 * i - 1; j++) {
            if (i == rows || j == 1 || j == 2 * i - 1)
                printf("*");
            else
                printf(" ");                            //prints the spaces present inside the hollow triangle

        }
        printf("\n");
    }

    return 0;
}
