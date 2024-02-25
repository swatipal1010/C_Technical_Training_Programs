#include<stdio.h>

int main(){
    int sum =0;
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(int i =1;i<num;i++){
        if(num%i==0){
            sum = sum+i;
        }
    }
    if(sum==num){
        printf("%d is a perfect number",num);
    }else{
        printf("%d is not a perferct number",num);
    }
}