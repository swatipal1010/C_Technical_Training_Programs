#include<stdio.h>

int main(){
    int num;
    int result=0;
    int q, rem;
    printf("Enter a number:");
    scanf("%d",&num);
    
    q =num;
    while(q!=0){
        rem = q%10;
        result = result*10+rem;
        q = q/10;
    }
    if(num==result){
        printf("%d is a palindrome.",num);
    }else{
        printf("%d is not a palindrome.",num);
    }

}