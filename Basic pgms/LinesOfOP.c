#include<stdio.h>

int main(){
    float sum = 0.0, j=1.0, i=2.0;
    int count =0;
    while(i/j > 0.001){
        j = j+1;
        sum= sum+i/j;
        //printf("%d ",count);
        //printf("%f\n",sum);
        count++;
        printf("%d\n",count);
    }
    printf("Loop runs for %d iterations.",count-1);
}