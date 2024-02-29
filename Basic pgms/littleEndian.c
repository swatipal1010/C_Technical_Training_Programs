#include<stdio.h>

int main(){
    int x=1;
    printf("%d",(*(char *)&x));
    return 0;
}