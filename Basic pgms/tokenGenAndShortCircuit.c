#include<stdio.h>

int main(){
    //TOKEN GENERATION
    int a =4, b=3;
    printf("Value of a+++b is: %d\n",a+++b);            //Parsed as a++ +b   -> 4+4     (a becomes 5 and b remains 3)
    printf("Value of a+ ++b is: %d\n",a+ ++b);          //Parsed as a+ ++b   -> 5+4     (b is pre-incremented here using ++b)

    int c=4, d=3;
    printf("Value of c+ ++d is: %d\n", c+ ++d);         //Parsed as c+ ++d                (d is pre-incremented here using ++d)


    //SHORT-CIRCUIT
    int x=5, y=3;
    int incr;
    incr = (x<y) && (y++);                                                        //If true, 1 is returned otherwise 0
    printf("Result of (x<y) && y++ is: %d\n", incr);                           //Either 1 or 0 will be printed based on condition result being evaluated
    printf("Value of y is: %d",y);                           //Value of y doesn't increments from 3 to 4 as y++ doesn't gets parsed because of short circuit on &&                           
}