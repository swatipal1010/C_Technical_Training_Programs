#include<stdio.h>

int main(){
    int a =10, b=11;
    int *ptr1, *ptr2;
    ptr1 = &a;
    ptr2 = ptr1;
    printf("a = %d %d %d\n",a,*ptr1,*ptr2);

    int x=5, y=6;
    int *ptrx, *ptry;
    ptrx = &x;
    ptry = &y;
    *ptry = *ptrx;
    printf("x = %d %d %d\n",x,*ptrx, *ptry);

    int i = 20;
    int *p = &i;
    int **q = &p;
    int ***r = &q;

    printf("i = %d\n",a);
    printf("i = %d\n",*p);
    printf("i = %d\n",*(*q));
    printf("i = %d\n",*(*(*r)));

    printf("Address of variable i is: %x %x\n",p, &i);
    printf("Address of level-1 pointer 'p' is: %x %x \n",q, &p);
    printf("Address of level-2 pointer 'q' is: %x %x \n",r, &q);
    printf("Address of level-3 pointer 'r' is: %x",&r);

     return 0;
}