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
    int n,r;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    printf("Enter the value of r: ");
    scanf("%d",&r);
    int combination = combinationCalc(n,r);
    printf("Combination obtained is:%d",combination);
    return 0;
}