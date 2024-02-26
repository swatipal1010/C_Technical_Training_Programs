#include<stdio.h>

int main(){
    typedef struct employee{
        int age;
        float salary;
    }employee;
    
    //Nesting: employee->manager
    typedef struct manager{
        employee sameVals;
        int incentive;
    }manager;


    //Nesting: employee->manager->ceo
    typedef struct ceo{
        manager sameVal;
        int yoe;
    }ceo;

    manager man1;
    man1.incentive = 2000;
    man1.sameVals.age = 52;
    man1.sameVals.salary = 50000.0;

    printf("Incentive received by manager: %d\n",man1.incentive);
    printf("Age of manager is: %d\n",man1.sameVals.age);

    ceo ceo1;
    ceo1.yoe = 25;
    ceo1.sameVal.incentive = 42000;
    ceo1.sameVal.sameVals.age = 55;
    ceo1.sameVal.sameVals.salary = 4000000.00;

    printf("Year of experience of COE: %d\n",ceo1.yoe);
    printf("Age of CEO: %d\n",ceo1.sameVal.sameVals.age);
    printf("Salary of CEO is: %.2f\n",ceo1.sameVal.sameVals.salary);

}