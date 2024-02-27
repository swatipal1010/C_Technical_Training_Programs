#include<stdio.h>

typedef struct employee{
    int age;
    int salary;
    char name[15];
}employee;

int main(){
    employee emp1;
    employee* ptr = &emp1;
    emp1.age = 25;
    emp1.salary = 25000;
    printf("Salary of employee: %d\n",emp1.age);

    (*ptr).age = 30;
    printf("Salary of employee after changed using pointer: %d\n",emp1.age);
    printf("Salary of employee after changed using pointer: %d\n", ptr->age);

}