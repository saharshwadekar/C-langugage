#include <stdio.h>
// #include <conio.h>

void drawL()
{
    int x, y;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (y == 0 || x == 4)
            {
                printf("L");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void drawE()
{
    int x, y;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (y == 0 || x == 0 || x == 2 || x == 4)
            {
                printf("E");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void drawT()
{
    int x, y;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (x == 0 || y == 2)
            {
                printf("T");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void drawU()
{
    int x, y;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (y == 0 || y == 4 || x == 4)
            {
                printf("U");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void drawS()
{
    int x, y;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (x == 0 || x == 2 || x == 4 || (y == 0 && x <= 2) || (y == 4 && x >= 2))
            {
                printf("S");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void drawC()
{
    int x, y;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (x == 0 || x == 4 || y == 0)
            {
                printf("C");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

void drawO()
{
    int x, y;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (x == 0 || x == 4 || y == 0 || y == 4)
            {
                printf("O");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}
void drawF()
{
    int x, y;
    for (x = 0; x < 5; x++)
    {
        for (y = 0; y < 5; y++)
        {
            if (x == 0 || x == 2 || y == 0)
            {
                printf("F");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
}

int main()
{
    //clrscr();
    drawL();
    drawE();
    drawT();
    drawU();
    drawS();
    drawC();
    drawO();
    drawF();
    drawF();
    drawE();
    drawE();
    // getchar();
    return 0;
}