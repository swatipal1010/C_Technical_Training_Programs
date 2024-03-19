#include<stdio.h>

int sum(int n){
    if(n==1) return 1;
    else return n+sum(n-1);
}

int main(){
    int n;
    printf("Enter a non-negative number upto which you want to find the sum: ");
    scanf("%d",&n);

    int sumOfN = sum(n);
    printf("Sum of %d non-negative numbers is: %d",n,sumOfN);
}