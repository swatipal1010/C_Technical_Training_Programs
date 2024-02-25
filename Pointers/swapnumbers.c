#include<stdio.h>
void swap(int *ptr1, int *ptr2){
    int temp =*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main(){
    int a,b;
    
    printf("Enter your first number: ");
    scanf("%d", &a);
    printf("Enter your second number: ");
    scanf("%d", &b);

    int *aptr = &a;
    int *bptr = &b;
    printf("Value of the integers before swapping: %d %d\n",a,b);
    swap(aptr, bptr);                                                           // Call the swap function to perform swapping
    printf("Value of the integers after swapping: %d %d", a, b); 
}