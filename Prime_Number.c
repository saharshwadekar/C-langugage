#include <stdio.h>

int main()
{
    // prime number
    int i, n = 7;
    for (i = 2; i <= n; i++)
    {
     
    if (n % i == 0)
    {
        printf(" it is an prime number %d", n);
                
    }
    
    else
        printf(" its not an prime number %d ", n);
        

    }
    return 0;
}