#include<stdio.h>
#include<stdbool.h>

int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;

    date a,b;
    a.day = 5;
    a.month = 12;
    a.year = 2009;

    b.day = 13;
    b.month = 6;
    b.year = 2009;

    bool flag1 = true;
    if(a.day != b.day) flag1 = false;
    if(a.month != b.month) flag1 = false;
    if(a.year != b.year) flag1 = false;

    if(flag1==true){
        printf("Dates are same.");
    }else{
        printf("Dates are different.\n");
    }

    date c = a;
    bool flag2 = true;
    if(a.day != c.day) flag2 = false;
    if(a.month != c.month) flag2 = false;
    if(a.year != c.year) flag2 = false;

    if(flag2==true){
        printf("Dates are same.");
    }else{
        printf("Dates are different.\n");
    }
    return 0;
}