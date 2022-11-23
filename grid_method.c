#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

int main()
{
    int r , c; // here r->Rows & c->column;
    for(r=1;r<=20;r++)
    {
        for(c=1;c<=150;c++)
        {
            printf(".");
        }
        printf("\n");
    }
    
    return 0;
}