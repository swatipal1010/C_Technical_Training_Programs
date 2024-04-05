#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);


    //Method-1
    for(int i=1; i<2*n;i++){
        for(int j=1;j<=n;j++){
            //to print long horizontal line of star of the plus sign
           if (i == n) { 
                for(int k=0; k<2*n; k++){
                    printf("*");
                }
                break;    
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


    //Method-2
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