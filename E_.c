#include <stdio.h>

int main()
{
    int c;
    
    for (c = 1; c <= 32; c++)
    {
        if (c < 9 || ( 13 < c && (c < 21) ) || c > 25) // for horizontal lines in letter 'E'
        {
            printf("%2d", c);
        }
        else // vertical line in letter 'E'
        {
            printf("\n%2d", c);
        }
    }
    printf("\n");
    // for (c = 1; c <= 32; c++)   // it is same as above 
    // {
    //     if ( c < 9 || 13 < c && (c < 21) || c > 25)
    //     {
    //         printf("E",c);
    //     }
    //     else
    //     {
    //         printf("\nE",c);
    //     }
    // }
    return 0;
}