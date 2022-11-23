#include <stdio.h>


void callno(int r){
    //printf("%d",r);
    r = 5 - r ;
    for(int i = 1; i <= r ;i++){
        printf("%d",i);
    }
}
int main()
{
    int num, r;
    for(num=4;num>0;num--)
    {
        for(r=1;r<num;r++)
        {
            printf(" ");
        }
        callno(r);
        printf("\n");
    }
    return 0;
}