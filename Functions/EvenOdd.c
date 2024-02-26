//For numbers from 1 to 10, print such that when odd number is encountered incr by 1, and when even then decr by 1
#include<stdio.h>
void odd(int n){
    if(n<=10){
        printf("%d ",n+1);
        n++;
        even(n);
    }
    return;
}

void even(int n){
    if(n<=10){
        printf("%d ",n-1);
        n++;
        odd(n);
    }
    return;
}

int main(){
    odd(1);
    return 0;
}