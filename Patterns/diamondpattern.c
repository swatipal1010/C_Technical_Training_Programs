#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    for(int i=0; i<rows; i++){
        for(int j=rows-1;j>i;j--){
            printf(" ");
        }
        for(int star=1;star<=(2*i+1);star++){
            printf("*");
        }
        printf("\n");
    }

    for (int i=rows-2; i>=0; i--) {
            // Print spaces to left of stars
            for (int j = 0; j < rows-1-i; j++) {
                printf(" ");
            }
            // Print stars
            for (int star=0; star<2*i+1; star++) {
                printf("*");
            }
            // Move to the next line after each row
            printf("\n");
        }
    return 0;
}