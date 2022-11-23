#include <stdio.h>
#include <string.h>
//#include <stdlib.h>
//#include <time.h>
struct employee
{
    int Code;
    float Salary;
    char Name[23];
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;
    // (*ptr).Code=101; // You can Write also as : ptr->code = 101;
    ptr->Code = 101;
    ptr->Salary = 56.32;
    strcpy(e1.Name,"Saharsh");
    
    printf("Code of Employee is: %d\n", e1.Code);
    printf("Salary of Employee is: %f\n", e1.Salary);
    printf("Name  of Employee is: %s\n", e1.Name);
   
    return 0;
}