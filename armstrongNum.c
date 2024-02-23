#include<stdio.h>

int main(){
    int num;
    int count=0;
    int result=0;
    int rem;
    printf("Enter a number:");
    scanf("%d",&num);
    int q =num;

    //count the number of digits in the number
    while(q!=0){
        q = q/10;
        count++;
    }

    q = num;
    int cnt = count;
    int mul =1;
    printf("Number of digits in %d are:%d \n",num,count);

    while(q!=0){
        {
            //getting the last digit of the number
            rem = q%10;
            //multiplying the last digit with the number of digits in the number
            while(cnt!=0){
            mul = mul*rem;
            cnt--;
            }
           
            result = result+mul;                 //adding the result to the multiplied number
            cnt = count;                        //resetting the count to the original value
            mul =1;                             //resetting the mul to 1
            q = q/10;                           //removing the last digit from the number
        }
    }

    if(result==num){
        printf("%d is an armstrong number. ",num);
    }
    else{
        printf("%d is not an armstrong number. ",num);
    }
}