#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1; i<=n;i++){
        for(int j=1;j<=n;j++){
            //to print the long horizontal line of stars
           if (i == n) { 
            for(int k =1 ;k<2*n;k++){
                printf("*");
            } 
            break;
            //to print a star after spaces  
            } else {
                if(j==n){
                    printf("*");
                }else{
                    printf(" ");
                }
                
            }
        }
        printf("\n");
    }

    //for printing star after the long horizontal line of stars
    for(int i= n-1; i>=1;i--){
        for(int j=n-1; j>=1; j--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
}