#include <stdio.h>
#include <conio.h>

void main()
{
    int i;
    clrscr();
    for(i=0;;i++)
    {
        printf("%2d\n",i);
        if(i%10==0){
            break;
        }
    }
    getch();
}