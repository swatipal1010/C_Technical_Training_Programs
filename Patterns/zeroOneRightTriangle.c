#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

//Right-angled triangle containing 0-1 pattern
    //Method-1
    printf("Right-angled triangle with 0-1 pattern:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            if(i%2==0){
                if(j%2==0)
                    printf("1 ");
                else
                    printf("0 ");
            }else{
                if(j%2==0)
                    printf("0 ");
                else
                    printf("1 ");
            }
        }
        printf("\n");
    }

    //Method-2
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            if((i+j)%2==0){                 //Where sum of i+j is even number, print 1 else 0
                printf("1 ");
            }else printf("0 ");
        }
        printf("\n");
    }

    //Method-3 (Using extra variable)
    int a;
    for(int i=0; i<rows; i++){
        if(i%2==0) a=1;                     //tells you in each row with which number to get started with (either with 0 or with 1)
        else a =0;
        for(int j=0; j<=i; j++){
            printf("%d ", a);
            if(a==0) a =1;                 //If row start with 0 then next number in that row is 1 and vice-versa
            else a = 0;
        }
        printf("\n");
    }
}