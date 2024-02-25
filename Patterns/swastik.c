#include<stdio.h>

//swastik program is printed by writing the logic for printing the plus sign present within the swastik and then writing the logic for the arms of the swastik
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=1; i<2*n;i++){
        for(int j=1;j<2*n;j++){
           if (i == n) { 
                printf("*"); 
            } 
            //condition for the arms of swastik i.e. part that is left if we don't consider the plus sign of the swastik
            else if((j==1 && i<n) || (i==1 && j>n) || (i==2*n-1 && j<n) || (j==2*n-1 && i>n)){
                printf("*");
            }
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
    
    /*for(int i= n-1; i>=1;i--){
        for(int j=n-1; j>=1; j--){
            printf(" ");
        }
        printf("*");
        printf("\n");
    } */
}