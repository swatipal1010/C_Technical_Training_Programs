#include<stdio.h>
int main(){
    int num;
    printf("Enter the number of rows & colums: ");
    scanf("%d", &num);

    for(int i=0; i<num; i++){
        for(int j=0; j<num; j++){
            if(j==i || (num-1)==(i+j))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}