#include<stdio.h>

int main(){
    int n;
    printf("Enter the valueof n: ");
    scanf("%d",&n);

    //Upper part of the diamond
    int temp = n;
    //for counting the number of rows
    for(int i=1; i<=n;i++){
        //for printing the spaces
        for(int j=temp;j>1;j--){
            printf(" ");
        }
        temp--;
        //for printing the numbers
        for(int k=1;k<=2*i-1;k++){
            printf("%d",k);
        }
        printf("\n");
    }

    //Lower part of the diamond
    int temp2 =n;
    for(int i =1; i<=n-1;i++){
        //for printing the spaces
        for(int j=1;j<=i;j++){
            printf(" ");
        }
        //for printing the numbers
        for(int k=1; k<=(2*(temp2-1)-1);k++){
            printf("%d",k);
        }
        temp2--;
        printf("\n");
    }
}