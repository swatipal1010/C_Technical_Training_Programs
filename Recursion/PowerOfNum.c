#include<stdio.h>

int power(int base, int N){
    if(N==0) return 1;
    return base*power(base, N-1);
}

int main(){
    int base, N;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the power: ");
    scanf("%d", &N);

    int result = power(base, N);

    printf("%d raised to the power %d is: %d",base, N, result);
}