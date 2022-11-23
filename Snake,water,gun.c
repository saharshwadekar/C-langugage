#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <stdlib.h>
#include <time.h>

char compchos(int num)
{
    char comp;
    if (num <= 3)
    {
        comp = 's';
    }
    else if (num > 3 && num <= 6)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    return comp;
}

void whowillwin(char you, char comp)
{

    if (you == comp)
    {
        printf("Game is draw");
    }

    if (you == 's' && comp == 'w')
    {
        printf("you win ,Bro");
    }
    else if (you == 'w' && comp == 's')
    {
        printf("you lose");
    }

    if (you == 'g' && comp == 's')
    {
        printf("you win ,Bro");
    }
    else if (you == 's' && comp == 'g')
    {
        printf("you lose");
    }

    if (you == 'w' && comp == 'g')
    {
        printf("you win ,Bro");
    }
    else if (you == 'g' && comp == 'w')
    {
        printf("you lose");
    }
}

int main()
{
    int num;
    srand(time(0));
    num = rand() % 10 + 1;
    compchos(num);
    // printf("comp %c",compchos(num));

    char you, comp;
    printf("Enter 's' for Snake, 'w' for Water, 'g' for gun: ");
    scanf("%c", &you);
    printf("you chose %c and computer chose %c\n", you, compchos(num));
    whowillwin(you, compchos(num));
    printf("\n");

    return 0;
}

