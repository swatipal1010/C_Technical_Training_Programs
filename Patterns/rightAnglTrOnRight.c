#include<stdio.h>
int main(){
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d", &rows);

//Method-1
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows; j++){
            if((i+j)>=rows-1)
                printf("*");
            else   
                printf(" ");
        }
        printf("\n");
    }

//Method-2
    for(int i=0; i<rows; i++){
        for(int j=0; j<rows-1-i; j++){          //Loop to print the spaces before star(s)
            printf(" ");
        }
        for(int k=0; k<i+1; k++){              //Loop to print the stars
            printf("*");
        }
        printf("\n");
    }
}