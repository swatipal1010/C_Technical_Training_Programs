#include<stdio.h>

int main(){
    printf("Enter the first value of the range: ");
    int start, end;
    scanf("%d",&start);
    printf("Enter the last value of the range: ");
    scanf("%d", &end);

    //METHOD-1
    printf("Odd numbers from %d to %d is: \n",start, end);
    for(int i=start; i<=end; i++){
        if(i%2==0) continue;
        else printf("%d\n",i);
    }

    printf("Odd numbers from %d to %d is: \n",start,end);
    int n;
    if(start%2==0) n=start;
    else n=start+1;
    for(int i=start; i<=end; i++){
        if(i==n){
            n=n+2;
            continue;
        } 
        printf("%d\n",i);
    }
}
