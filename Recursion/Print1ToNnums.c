#include<stdio.h>

void print1ToN(int N){
    if(N==0) return;
    print1ToN(N-1);
    printf("%d\n",N);
}

int main(){
    int N;
    printf("Enter the number upto which you want to print: ");
    scanf("%d", &N);
    print1ToN(N);
}