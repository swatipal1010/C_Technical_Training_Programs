#include<stdio.h>

int factorial(int num){
    int fact=1;
    for(int i=2;i<=num;i++){
        fact = fact*i;
    }
    return fact;
}

int combinationCalc(int n, int r){
    int comb = factorial(n)/(factorial(r)*factorial(n-r));
    return comb;
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        for(int k=1; k<=n-i;k++){               //To print the space before the start of each row
                printf(" ");
            }
        for(int j=0; j<=i;j++){
            int icj = combinationCalc(i,j);
            printf("%d",icj);
            printf(" ");                        //To print the space after each number in a row is printed
        }
        printf("\n");
    }
    return 0;
}