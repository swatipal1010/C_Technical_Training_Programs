#include<stdio.h>

void printNto1(int num, int N){
    if(num<N) return;
    else printf("%d\n",num);
    printNto1(num-1, N);
}
int main(){
    int num, N;
    printf("Enter the starting number: ");
    scanf("%d", &num);
    printf("Enter the ending number: ");
    scanf("%d",&N);

    printNto1(num, N);

}