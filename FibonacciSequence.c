#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// int fib(int n);

int main()
{
    int c, n, t1 = 0, t2 = 1, Nextterm;
    printf("Enter the number for fibonacci number :");
    scanf("%d",&n);
    for (c = 0; c < n; c++)
    {
        if (c < 2)
        {
            Nextterm = c;
        }
        else{
            Nextterm = t1 + t2;
            t1 = t2;
            t2 = Nextterm;
        }
        printf("%5d", Nextterm);
    }
    printf("\n");
    return 0;
}

// int fib(int n)
// {
//     int fibNm1 = fib(n-1);
//     int fibNm2 = fib(n-2);
//     int fibN = fibNm1 + fibNm2;
//     printf("Fib of %d is : %d\n",n,fibN);
//     return 0;
// }