#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


int main()
{
    int arr[5] = {2,1,0,0,0};
    int temp, c, p;
    for (p = 0; p < 5; p++)
    {
        for (c = 0; c < 5 - 1; c++)
        {
            if (arr[c] > arr[c + 1])
            {
                int temp;
                temp = arr[c];
                arr[c] = arr[c + 1];
                arr[c + 1] = temp;
            }
        }
    }
    for (c = 0; c < 5; c++)
    {
        printf("%4d", arr[c]);
    }
    printf("\n");
    return 0;
}