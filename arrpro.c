#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    float arr[10] = {27,26,22,15,35,10,7,12,28,9};
    int c,count=0,narr[10];
    for(c=0;c<=9;c++)
    {
        printf("\nStudent %d got %.1f marks",c+1,arr[c]);
        if(arr[c]>11)
        {
            count++;
        }
        else 
            arr[c] = arr[c] + 3.5;
    }
    printf("\nThe no. of student pass in exam is %d\n",count);
    count=0;
    for(c=0;c<=9;c++)
    {
        printf("\nStudent %d got %.1f marks",c+1,arr[c]);
        if(arr[c]>11)
        {
            count++;
        }
    }
    printf("\nThe no. of student pass in exam after moderation is %d\n\n",count);
    for(c=0;c<10;c++)
    {
        if(arr[c]>11)
        {
            printf(" %.1f ",arr[c]);
        }
        else
            printf("    ");
    }
    printf("\n");
    return 0;
}