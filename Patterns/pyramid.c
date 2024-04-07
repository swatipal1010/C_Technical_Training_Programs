#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

//Method-1
    for(int i =0; i<rows; i++){
        for(int j=0; j<rows-1-i; j++){
            printf(" ");                    //spaces before the first star is printed
        }
        for(int k=0; k<2*i+1; k++){
            printf("*");
        }
        printf("\n");

    }

//Method-2
int nsp = rows-1;                   //number of spaces in the first row before star(s)
int nst = 1;                        //Number of stars in the 1st row
    for(int i=0; i<rows; i++){
        for(int j=0; j<nsp; j++){
            printf(" ");
        }
        nsp--;                          //number of spaces decrease by 1 as we move to next row
        for(int k=0; k<nst; k++){
            printf("*");
        }
        nst+= 2;                        //Number of stars increase by 2 as move to next row
        printf("\n");
    }
}