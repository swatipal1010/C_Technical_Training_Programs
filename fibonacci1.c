#include<stdio.h>

int main(){
    int a=0;
    int b= 1;
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int sum;
    printf("Fibonacci series is: ");
    for(int i=1;i<=num;i++){
        printf("%d ",a);
        sum = a+b;
        a = b;
        b =sum;
    }
    return 0;
}