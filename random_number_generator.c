#include <stdio.h>
#include <stdlib.h>       // Header File //
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;  // Generate random number between 0 to 100 //nn
    printf("the number is %d\n", number);
    // keep running the untill the number is guess
    return 0;
}