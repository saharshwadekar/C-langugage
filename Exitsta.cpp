#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
    int i, num=15;
    clrscr();
    for(i=1;i<=num;i++)
    {
        if(i==6)
            exit(0);
        else    
            printf("\n Number is %d",i);
    }
    getch();  
}