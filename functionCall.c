#include<stdio.h>

void america(){
    printf("You are in America.\n");
    return;
}

void europe(){
    printf("You are in Europe.\n");
    america();
    return;
}

void india(){
    printf("You are in India.\n");
    europe();
    return;
}

int main(){
    india();
    return 0;
}