#include <stdio.h>
int factorial(int x);
int main()
{
    int a = 7;
    printf("Factorail of %d is %d.\n", a, factorial(a));
    return 0;
}
int factorial(int x)
{
    printf("Calling for factorial(%d)\n",x);
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * factorial(x - 1);
    }
}