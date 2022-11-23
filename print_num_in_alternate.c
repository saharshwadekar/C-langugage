#include <stdio.h>

int main()
{
    int num,r;
    printf("\nFor increasing order\n");
    for(num=1;num<=4;num++)
    {
        
        for(r=1;r<=num;r++)
        {
            printf("%d",r);
        }
        printf("\n");
        
    }
// for dercreasing order
    printf("\n\nFor decreasing order\n");
    for(num=5;num>0;num--)
    {
        for(r=1;r<=num;r++)
        {
            printf("%d",r);
        }
        printf("\n");
        
    }

    return 0;
}
