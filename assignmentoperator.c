// Working of assignment operators
#include <stdio.h>
int main()
{
    int a = 9, b;

    b = a;      // c is 5
    printf("b = a = %d\n", b);
    b += a;     // c is 10 
    printf("b += a = %d\n", b);
    b -= a;     // c is 5
    printf("b -= a = %d\n", b);
    b *= a;     // c is 25
    printf("b *= a = %d\n", b);
    b /= a;     // c is 5
    printf("b /= a = %d\n", b);
    b %= a;     // c = 0
    printf("b %= a = %d\n", b);

    return 0;
}