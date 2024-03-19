#include<stdio.h>

void printNto1(int N){
    if(N<1) return;
    printf("%d\n", N);
    printNto1(N-1);
}

int main(){
    int N;
    printf("Enter the number from where to start: ");
    scanf("%d", &N);

    printNto1(N);
}