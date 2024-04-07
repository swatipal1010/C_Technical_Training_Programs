#include<stdio.h>

int main(){
    printf("Enter the number of rows: ");
    int rows;
    scanf("%d",&rows);

    for(int i=0; i<rows; i++){
        for(int j=0; j<rows-1-i; j++){          //Spaces before number printing starts in each row
            printf(" ");
        }
        int num =1;
        for(int k=0; k<=i; k++){               //Number printing in the row (forming right-angled triangle of numbers)
            printf("%d",num++);
        }
        num--;
        for(int m=0; m<i; m++){                //Printing number after the right-angled triangle of numbers
            printf("%d",--num);
        }
        printf("\n");
    }
}