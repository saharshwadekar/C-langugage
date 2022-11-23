#include <stdio.h>
// #include <stdlib.h>
#include <string.h>
// #include <time.h>

struct employee
{
    int code;
    float salary;
    char name[34];
};

int main()
{
    int num;
    printf("Enter the number of empolyee: ");
    scanf("%d", &num);
    struct employee facebook[num];
    for (int a = 1; a <= num; a++)
    {
        printf("Enter the name of empolyee %d: ", a);
        scanf("%s", facebook[a].name);
        printf("Enter the code of empolyee %d: ", a);
        scanf("%d", &facebook[a].code);
        printf("Enter the salary of empolyee %d: ", a);
        scanf("%.3f", &facebook[a].salary);
    }
    for (int a = 1; a <= num; a++)
    {
        printf("The name of employee %d is: %s\n", a, facebook[a].name);
        printf("The code of employee %d is: %d\n", a, facebook[a].code);
        printf("The salary of employee %d is: %f\n", a, facebook[a].salary);
    }

    return 0;
}
