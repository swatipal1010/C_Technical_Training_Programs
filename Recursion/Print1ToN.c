#include<stdio.h>

void print1ToN(int num, int N){
    if(num<=N){
        printf("%d\n", num);
    }
    return print1ToN(num+1, N);
}

int main(){
    int num, N;
    printf("Enter the number from where you want the numbers to get printed: ");
    scanf("%d", &num);
    printf("Enter the number upto which you want to print: ");
    scanf("%d", &N);

    print1ToN(num, N);
}