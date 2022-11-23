#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[34];
}; 
void func(struct employee e);
int main()
{
    struct employee e;
    e.code=100;
    e.salary=10.32;
    strcpy(e.name, "Harry");
    func(e);
    return 0;
}
void func(struct employee e){
    printf("%d\n",e.code);
    printf("%f\n",e.salary);
    printf("%s\n",e.name);
}