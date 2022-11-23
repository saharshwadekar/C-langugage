#include <stdio.h>

int main()
{
    int num = 1623, id, sum = 0, copy = num;
    for (int c = 1; num > 0; c++)
    {
        id = num % 10;
        // printf("%d\n", id);
        num = num / 10;
        sum = sum + id;
        printf("%3d is ld And %3d is num And sum is %d\n", id, num, sum);
    }
    printf("Ans:\n after the looop , sum of digits of %d is %d\n", copy, sum);
    return 0;
}