#include <stdio.h>

void vertical(int ht, char ch)
{
    for (int r = 1; r <= ht; r++)
    {
        printf("%c\n",ch);
    }
}

void horizon(int wid, char ch)
{
    for (int r = 1; r <= wid; r++)
    {
        printf("%c", ch);
    }
    printf("\n");
}

int main()
{
    int ht = 7, wid = 7;
    // for A
    vertical(ht, 'A');
    gotoxy(1,4);
    horizon(wid, 'A');
    return 0;
}