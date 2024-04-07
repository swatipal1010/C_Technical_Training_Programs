#include<stdio.h>

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);                                     //n is that row which has horizontal line of stars


    //Method-1
    if(n%2==0){
        printf("Value of 'n' must be odd.");
    }else{
        for(int i=1; i<2*n;i++){                         //total number of rows is 2*n-1
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
    }
    
    printf("\n");
    //Method-2
    if(n%2==0){
        printf("Value of 'n' must be odd.");
    }else{
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
}