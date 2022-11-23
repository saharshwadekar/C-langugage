/******************************************************************************************************************************/
/******************************************************************************************************************************/

//                                              NUMBER GUESSING GAME

/******************************************************************************************************************************/
/******************************************************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generate random number between 0 to 100 //
    // printf("the number is %d\n", number);
    //  keep running the untill the number is guess
    do
    {
        printf("Guess a number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please...\n");
        }
        else if (guess < number)
        {
            printf("Higher number please...\n");
        }
        else 
        {
            printf("Hurray , you guessed it in %d attempts.\n", nguesses);
        }
        
        nguesses++;
    } while (guess!=number);

    return 0;
}