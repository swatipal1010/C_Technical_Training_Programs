#include<stdio.h>
int main(){
    int num; 
    int weight =1;
    int result =0;
    printf("Enter a binary number: ");
    scanf("%d",&num);

    int q = num;
    int rem;
    while(q!=0){
        rem = q%10;
        result = result+rem*weight;
        q = q/10;
        weight = weight*2;
    }

    printf("Decimal equivalent of %d is: %d", num,result);
    return 0;
}