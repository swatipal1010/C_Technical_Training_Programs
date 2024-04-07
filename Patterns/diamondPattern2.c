#include<stdio.h>

int main() {
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d", &rows);

    int nsp = rows / 2;
    int nst = 1;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < nsp; j++) {
            printf(" ");
        }
        for (int j = 0; j < nst; j++) {
            printf("*");
        }
        printf("\n");

        // Update nsp and nst based on the current row position
        if (i < rows / 2) {
            nsp--;
            nst += 2;
        } else {
            nsp++;
            nst -= 2;
        }
    }

    return 0;
}
