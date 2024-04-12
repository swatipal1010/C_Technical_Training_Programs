#include<stdio.h>

int main(){
    printf("Enter the number of rows:");
    int rows;
    scanf("%d",&rows);

    for(int i=0; i<rows; i++){
        for(int j=0; j<(2*rows-1);){
            if(i==0){
                printf("*");
                j++;
            }else{
                if((i+j)==rows){
                for(int k=1; k<=(2*i-1);k++){
                    printf(" ");
                    j++;
                }
                }else{
                    printf("*");
                    j++;
                }
            }       
        }
        printf("\n");
    }


//METHOD-2
    /*  **** ****
        ***   ***
        **     **
        *       *
    */
   int nst=rows-1;
   int nsp =1;
   //rows = 4
   //nst = 4        We begin with number of stars = 4 = rows
   ///nsp =1        We begin with number of spaces = 1
   for(int x=1; x<=(2*rows-1);x++){
    printf("*");
   }
   printf("\n");
   for(int i=1; i<=rows-1; i++){
        for(int j=1; j<=nst; j++){
        printf("*");
        }
        for(int space =1; space<=nsp; space++){
            printf(" ");
        }
        for(int k=1; k<=nst; k++){
            printf("*");
        }
        nst--;
        nsp = nsp+2;
        printf("\n");
   }


//Hollow Triangle with numbers around it
for(int i=0; i<rows; i++){
     int num =1;
        for(int j=0; j<(2*rows-1);){
            if(i==0){
                printf("%d",num++);
                j++;
            }else{
                if((i+j)==rows){
                for(int k=1; k<=(2*i-1);k++){
                    printf(" ");
                    num++;
                    j++;
                }
                }else{
                    printf("%d",num++);
                    j++;
                }
            }       
        }
        printf("\n");
    }



//Hollow Triangle with numbers around it
   int nst2=rows-1;
   int nsp2 =1;
   //rows = 4
   //nst2 = 4        We begin with number of stars = 4 = rows
   ///nsp2 =1        We begin with number of spaces = 1
   int num=1;
   int mid= rows;
   for(int x=1; x<=(2*rows-1);x++){
    if(x<=rows){
        printf("%d",x);
    }else{
        printf("%d",--mid);
    }
   }
   printf("\n");
   for(int i=1; i<=rows-1; i++){
        for(int j=1; j<=nst2; j++){
        printf("%d",num++);
        }
        for(int space =1; space<=nsp2; space++){
            printf(" ");
        }
        for(int k=1; k<=nst2; k++){
            printf("%d",--num);
        }
        nst2--;
        nsp2 = nsp2+2;
        printf("\n");
   }
}