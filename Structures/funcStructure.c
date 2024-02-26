#include<stdio.h>
#include<string.h>


//structure is declared outside the main func so that is visible to function(s) that are present outside the main func and trying to access that structure
typedef struct employee{
    int age;
    int salary;
    char name[15];
}employee;


void func(employee emp){
    printf("Age of employee is: %d\n",emp.age);
    printf("Salary of employee is: %d\n",emp.salary);
    printf("Name of employee is: %s\n",emp.name);
}


int main(){
    employee emp1;
    emp1.age = 30;
    emp1.salary = 50000;
    strcpy(emp1.name,"Richard");
    func(emp1);
}