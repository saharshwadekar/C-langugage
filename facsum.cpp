#include <stdio.h>
// #include <conio.h>

// void calsum(int num, int i, int sum)
// {
// 	num /= i;
// 	sum += num;
// 	printf("%4d",sum);
// }

int main(){
	int i, n,fac, factorial = 1, sum =0, d=1;;
	// clrscr();
	printf("Enter the no. :");
	scanf("%d",&n);
	for(i =1; i<=n; i++)
	{
		factorial *= i;
        fac = factorial;
        fac /= d;
        sum += fac;
        d++;
		// calsum(factorial,i,sum);
	}
    printf("%d",sum);
	printf("\n");
    return 0;
}