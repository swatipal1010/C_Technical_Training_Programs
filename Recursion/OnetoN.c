#include<stdio.h>

void recur1toN(int num, int n){
    if(num>n){
        return;
    }
    printf("%d\n",num);
    return recur1toN(num+1, n);
}

int main(){
    int num, N;
    printf("Enter the number from where you want the numbers to get printed: ");
    scanf("%d", &num);
    printf("Enter the number upto which you want to print: ");
    scanf("%d", &N);

    recur1toN(num, N);
}