#include<stdio.h>

int min(int a, int b){
    int min =a;
    if(a>b) min=b;
    return min;
}

int gcd(int a, int b){
    int hcf;
    for(int i=min(a,b); i>=1;i--){                      /*Start the loop from last so that the largest number from last that divides 'a' & 'b' is 
                                                        the GCD of the numbers*/
        if(a%i==0 && b%i==0){
            hcf = i;
            break;
        }
    }
    return hcf;
}

int main(){
    int a, b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    int hcf = gcd(a,b);
    printf("The HCF/GCD of %d and %d is: %d ",a,b,hcf);
}