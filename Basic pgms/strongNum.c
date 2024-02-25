#include<stdio.h>

int main(){
    int num, result =0;
    int fact =1;
    int rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    int q = num;
    
    while(q!=0){
        rem = q%10;
        for(int i =rem; i>=1;i--){
            fact = fact*i;
        }
        result = result+fact;
        q = q/10;
        fact =1;
    }

    if(result == num){
        printf("%d is a strong number.",num);
    }else{
        printf("%d is not a strong number.",num);
    }
    return 0;
}