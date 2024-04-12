#include<stdio.h>

int main(){
    int p, q, r, s;
    printf("Enter the first number: ");
    scanf("%d",&p);
    printf("Enter the second number: ");
    scanf("%d",&q);
    printf("Enter the third number: ");
    scanf("%d",&r);
    printf("Enter the fourth number: ");
    scanf("%d",&s);


//Greatest among 4 numbers
    int greatest4 = ((((p>q)?p:q)>r)?((p>q)?p:q):r)>s? (((p>q)?p:q)>r)?((p>q)?p:q):r :s;
    printf("Greatest number among %d, %d, %d, %d is: %d", p,q,r,s,greatest4);


    int x, y, z;
    printf("\nEnter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d",&y);
    printf("Enter the third number: ");
    scanf("%d",&z);
//Greatest among 3 numbers
    int greatest3 = ((x>y)?x:y)>z ? (x>y)?x:y : z;
    printf("Greatest number among %d, %d, %d is: %d", x,y,z,greatest3);
}