#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter the value of A\n");
    scanf("%f", &a);

    printf("Enter the value of B\n");
    scanf("%f", &b);

    printf("Enter the value of C\n");
    scanf("%f", &c);

    if (a > b && b > c)
        printf(" %f >  %f > %f", a, b, c);
    if (a > b && c > b && a > c)
        printf(" %f >  %f > %f", a, c, b);
    if (a > b && c > b && c > a)
        printf(" %f >  %f > %f", c, a, b);
    if (b > a && c < b && c > a)
        printf(" %f >  %f > %f", b, c, a);
    if (a < b && c > b && c > a)
        printf(" %f >  %f > %f", c, b, a);
    if (b > a && c < b && c < a)
        printf(" %f >  %f > %f", b, a, c);
    if (b == a && c < b)
        printf(" %f = %f > %f", b, a, c);
    if (b == a && c == b)
        printf(" %f = %f =%f", b, a, c);
    if (b == a && c > b)
        printf(" %f = %f > %f", c, b, a);
    if (c == a && c < b)
        printf(" %f > %f = %f", b, a, c);
    if (c == a && c > b)
        printf(" %f = %f > %f", a, c, b);
    if (b == c && c < a)
        printf(" %f > %f = %f", a, c, b);
    if (b == c && c > a)
        printf(" %f = %f > %f", c, b, a);
    printf("\n");

    return 0;
}
