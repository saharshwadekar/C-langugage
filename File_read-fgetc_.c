#include <stdio.h>

int main()
{
    char c;
    int count = 0;

    FILE *read;
    read = fopen("getcdemo.txt", "r");
    c = fgetc(read); //<---fgetc used to read the one character

    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(read);
        count++;
    }
    printf("\n%d count", count);

    printf("\n");
    return 0;
}

// EOF-->End-Of-File