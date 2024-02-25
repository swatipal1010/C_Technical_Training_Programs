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
    return 0;
}