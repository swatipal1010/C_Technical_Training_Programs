#include<stdio.h>

//SYNTAX of Macro = #define MACRO VALUE
#define PI 3.14159               //Macro is replaced by its value
#define NUM 2
#define sum(x,y) x+y            //Macro as a function
//Multi line value of the MACRO
#define greater(x,y) if(x>y)\                                   
                     printf("%d is greater than %d.\n",x,y);\
                     else\
                     printf("%d is greater than %d.\n",y,x);

#define STRING "%s\n"
#define QUOTE "It's never to late to make a new beginning."

int main(){
    printf("Macro 'NUM' has a value: %d\n", NUM);

    int x,y;
    printf("Enter the first number: ");
    scanf("%d",&x);
    printf("Enter the second number: ");
    scanf("%d", &y);
    printf("Addition of two numbers %d and %d is %d\n",x,y,sum(x,y));
    printf("Result of the expression a*b+c is: %d\n", 5*sum(7,3));

    printf("Enter the radius of the circle: ");
    float radius;
    scanf("%f",&radius);
    printf("Area of circle with radius %.2f is: %.2f\n",radius, PI*radius*radius);

    printf("Let's check which among %d and %d is greater\n",x,y);
    greater(x,y);

    printf(STRING, QUOTE);
    
    //Pre-defined MACROS
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);
}