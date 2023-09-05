#include<stdio.h>
#include<string.h>
struct employee
{
    int id;
    char name[10];
    float salary;
}e1,e2;
int main()
{
    //strcpy(e1.name,"Arjun");  // array 
    strcpy(e1.name,"Arjun");
    e1.id=10;
    e1.salary=500;  // a=10
    printf("ID of the employee is : %d\n",e1.id);
    printf("Name of the employee is :%s\n",e1.name);
    printf("salary of the employee is :%f\n",e1.salary);
    return 0;
}

