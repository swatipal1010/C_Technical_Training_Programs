#include<stdio.h>
int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);

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
}