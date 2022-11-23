#include <stdio.h>

int main()
{
    int e;
    for(e=1;e<=31;e++)
    if(e<10){
        printf("%02d",e);
    }
    else{
        if(e<13){
            printf("\n%d",e);
        }
        else{
            if(e<21){
                printf("%d",e);

            }
            else{
                if(e<24){
                    printf("\n%d",e);
                }
                else{
                    printf("%d",e);
                }
            }
        }
    }
    printf("\n");
    
    return 0;
}
/*
Output should be:


EEEEEEEEE
E
E
EEEEEEEEE
E
E
EEEEEEEEE

*/