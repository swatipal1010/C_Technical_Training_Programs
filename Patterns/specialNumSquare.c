#include<stdio.h>

int main(){
    printf("Enter the number of lines: ");
    int num;
    scanf("%d",&num);

    int min=0;
    for(int i=1; i<=(2*num-1); i++){
        for(int j=1; j<=(2*num-1); j++){
            int a = i;
            if(i>num){
                a = 2*num-i;
            }
            int b = j;
            if(b>num){
                b = 2*num-j;
            }
            if(a>b) min = b;
            else min = a;
            printf("%d ",num+1-min);
        }
        printf("\n");
    }
}