#include<stdio.h>
#include<string.h>

int main(){
    typedef struct employee{
        int age;
        float salary;
        char name[15];
    }employee;

    employee emp1;
    emp1.age = 25;
    emp1.salary = 8000.25;
    strcpy(emp1.name,"John");                           //can't use emp1.name = "John"

    printf("Salary of emp1 is: %.3f\n",emp1.salary);
    printf("Name of emp1: %s\n",emp1.name);

    struct employee emp2;
    printf("Enter the age of emp2: ");
    scanf("%d",&emp2.age);
    printf("Age of emp2 is: %d\n",emp2.age);


    //Array of struct datatype
    employee arr[3];

    arr[0].age = 25;
    arr[0].salary = 4521.23;
    strcpy(arr[0].name, "Robert");

    arr[1].age = 30;
    arr[1].salary = 7000.44;
    strcpy(arr[1].name, "Marie");

    arr[2].age = 44;
    arr[2].salary = 10101.253;
    strcpy(arr[2].name, "Harry");

    for(int i=0; i<3;i++){
        printf("**********************************************\n");
        printf("Age of emp is: %d\n",arr[i].age);
        printf("Name of emp is: %s\n",arr[i].name);
        printf("Age of emp is: %.2f\n",arr[i].salary);
        

    }
    printf("***********************************************\n");


    //Assigning one variable to another
    employee emp3, emp4;
    emp3.age = 22;
    emp3.salary = 6532.142;
    strcpy(emp3.name, "Mario");

    emp4 = emp3;            //Deep copy - 'emp4' is a new structure where values of 'emp3' are copied
    printf("Salary of emp3 and emp4 is: %.2f %.2f\n",emp3.salary, emp4.salary);
    printf("Age of emp4 before changing the value: %d\n",emp4.age);

    emp4.age = 26;
    printf("Age of emp4 after changing the value: %d\n",emp4.age);

    return 0;
}