#include <stdio.h>

int main()
{
    int num , r;
    for (num=1;num<=5;num++)
    {
        for(r=1;r<=num;r++){
            printf("%d",num);
        }
        printf("\n");
    }
    
    return 0;
}
/* 
1
22
333
4444
55555
*/
