#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("Random Number is = %d.\n",number);
    int guess, attempt = 1;
    do
    {
        printf("Entre a number from 1 to 100\n");
        scanf("%d", &guess);
        if (guess < number)
        {
            printf("Nope., Try greater then %d.\n", guess);
        }
        else if (guess > number)
        {
            printf("Nope., Try smaller then %d.\n", guess);
        }
        else
        {
            printf("Hurray!!.. You gattcha in %d attempt.\n", attempt);
        }
        attempt++;

    } while (guess!=number);

    return 0;
}
