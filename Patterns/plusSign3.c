#include<stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);


    //Method-1
    if(rows%2==0){
        printf("Number of rows should be odd.");
    }else{
        for(int i=1; i<=rows; i++){
            int mid = rows/2+1;
            for(int j=1; j<=rows; j++){
                if(i==mid){
                    for(int k=1; k<=rows;k++){
                        printf("*");
                    }
                    break;
                }else{
                    if(j==mid){
                    printf("*");
                }else{
                    printf(" ");
                }
                }   
            }
            printf("\n");
        }
    }


    //Method-2
    printf("\n");
    if(rows%2==0){
        printf("Number of rows must be positive");
    }else{
        for(int i=1; i<=rows; i++){
            for(int j=1; j<=rows; j++){
                if(j==(rows/2+1) || i==(rows/2+1))
                    printf("*");
                else
                printf(" ");
            }
            printf("\n");
        }
    }
}