#include<stdio.h>
int main(){
    int a;
    char b;
    
    scanf("%d ",&a);    // Use space after d so that /n is not recognised as character. scanf ignores all the spaces(tab, whitespace etc) until non-whitespace character is entered.
    scanf("%c",&b);   //takes imput as 4 /n where /n stores in the char and we get no result for char
    
    printf("Integer value is: %d\n",a);
    printf("Character value is: %c\n",b);
    
    return 0;
}