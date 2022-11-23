#include <stdio.h>

void calsum(int num, int i){
    int sum = 0;
    for(int n=i;n==i;n++){
        num /= i;
    }
    sum += num;
    printf("%4d",sum);
}

int main()
{
    // factorial Example lets take factorial of 4 = 1*2*3*4
    // noe lets take factorial of 8 = 1*2*3*4*5*6*7*8
    
    int i = 1 ,n ,factorial = 1, sum = 0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for (i = 1; i <= n;i++)
    {
        factorial *= i;
        
        calsum(factorial,i);
    }
    printf("\n");
    //printf("The Factorial of %d is %d\n", n,factorial);
    return 0;
}