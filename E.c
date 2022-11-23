#include <stdio.h>

int main()
{
    int e;
    for (e = 1; e <= 25; e++)
    {
        if (e < 7)
            printf("%2d", e);       // upper horizontal line
            else if (e < 10)
                printf("\n%2d", e);     // decline/ vertical line  
                else if (e < 16)
                    printf("%2d", e);       // middile horizontal line
                    else if (e < 19)
                        printf("\n%2d", e);     // lower vertical line
                        else if (e < 25)
                            printf("%2d", e);       // bottom horizontal line
    }
    return 0;
}