#include<stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows:");
    scanf("%d",&rows);

    //Right angled triangle of stars
    printf("Right angled triangle of stars:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }

    //Right angled triangle of numbers 
    printf("Right-angled triangle of numbers:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            printf("%d ",j+1);
        }
        printf("\n");
    }

    //Right angled triangle of numbers -- Floyd's Triangle
    printf("Floyd's Triangle:\n");
    int num =1;
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            printf("%d ",num++);
        }
        printf("\n");
    }

    //Right angled triangle of odd numbers -- method-1
    printf("Right-angled triangle of odd numbers:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            printf("%d ",(2*j+1));
        }
        printf("\n");
    }

    //Right angled triangle of odd numbers -- method-2
    printf("Right-angled triangle of odd numbers:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<=(2*i+1); j=j+2){
            printf("%d ",j+1);
        }
        printf("\n");
    }
    

    //Right-angled triangle of characters
    printf("Right-angled triangle of characters:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i;j++){
            printf("%c ",(char)j+65);
        }
        printf("\n");
    }


    //Right-angled triangle : Combination of numbers and alphabets
    printf("Right-angled triangle of numbers and characters:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<=i; j++){
            if(i%2==0){
                printf("%d ",j+1);
            }else{
                printf("%c ",(char)j+65);
            }
        }
        printf("\n");
    }

}