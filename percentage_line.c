#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

int main()
{
    int c , r;
    for(c=1;c<=70;c++)
    {
        printf("%d",c%10);
    }
    printf("\n");
    for(c=1;c<=70;c++)
    {
        if(c%10==0){
            printf("%d",c/10);
        }
        else{
            printf(" ");
        }
    }
        printf("\n");
       
    return 0;
}