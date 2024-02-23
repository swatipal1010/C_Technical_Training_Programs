#include<stdio.h>

int main(){
    int base, exponent;
    float power = 1.0;

    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);
    int expo = exponent;

    //if power is positive
    if (exponent > 0){
        while(expo !=0){
            power = power*base;
            expo--;
        }
        printf("Power of %d raised to %d is: %.2f",base,exponent,power);
    }
    //if power is zero
    else if(exponent == 0){
        printf("Power of %d raised to %d is: 1",base,exponent);
    }
    //if power is negative
    else{
        while(expo !=0){
            power = power*(1.0/base);
            expo ++;
        }
        printf("Power of %d raised to %d is: %.2f",base,exponent,power);
    }
    return 0;

}