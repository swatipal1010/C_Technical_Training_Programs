#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    //Method-1
    for(int i=0; i<rows;i++){
        for(int j=rows; j>i; j--){
            printf("*");
        }
        printf("\n");
    }

    //Method-2
    for(int i=0; i<rows; i++){
        for(int j=0; j<=rows-i;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}