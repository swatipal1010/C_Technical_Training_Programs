//This program don't works as intended. It doesn't swap the numbers because it works using pass by value instead of pass by reference. 
//The correct way to do this is to use pointers and passing numbers by reference. 

#include<stdio.h>
 void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
 }
 int main(){
    int x = 10;
    int y = 20;
    printf("Values before swapping: %d %d\n",x,y);
    swap(x,y);
    printf("Values after swapping: %d %d",x,y);
    return 0;
 }