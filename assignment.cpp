// Working of assignment operators
#include <stdio.h>
#include <conio.h>
void main()
{
    int a = 9, b;

    b = a;   
    printf("b = %d\n", b);
    b += a;    
    printf("b = %d\n", b);
    b -= a;   
    printf("b = %d\n", b);
    b *= a;   
    printf("b = %d\n", b);
    b /= a;    
    printf("b = %d\n", b);
    b %= a;     
    printf("b = %d\n", b);

    getch();
}