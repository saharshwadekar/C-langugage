#include <stdio.h>

void status(int age, char gen)
{
    if ((gen == 'm' && age >= 21) || (gen == 'f' && age >= 18))
    {
        printf("You can Happily Marry\n");
    }
    else if (gen == 'm' && age < 21)
    {
        printf("O Boy :Your age is: %d And You can marry after: %d year\n", age, (21 - age));
    }
    else if (gen == 'f' && age < 18)
    {
        printf("O girl :Your age is: %d And You can marry after: %d year\n", age, (18 - age));
    }
    else //***************************//
    {
        printf(" invaild \n");
    }
}
int main()
{
    int age;
    char gen; // You make change in here so we can identify :

    printf("Enter Your Gender(m/f): ");
    scanf("%c", &gen);
    printf("Enter Your age: ");
    scanf("%d", &age);
    // printf("\n");
    
    status( age, gen);

    return 0;
}