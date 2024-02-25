#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1; i<2*n;i++){
        for(int j=1;j<2*n;j++){
            //to print long horizontal line of star of the plus sign
           if (i == n) { 
                printf("*"); 
            } 
            //to print the star after spaces
            else {
                if(j==n){
                    printf("*");
                }else{
                    printf(" ");
                }
                
            }
        }
        printf("\n");
    }
}