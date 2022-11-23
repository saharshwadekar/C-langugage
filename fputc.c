#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

int main()
{
    FILE *re;

// fgetc demo for reading a file   <----------------------

    // re = fopen("Getcdemo.txt", "r");
    // // char c = fgetc(re);
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c", fgetc(re));
    // printf("%c\n", fgetc(re));

//putc is use to write a file           <------------------------
    re = fopen("putcdemo.txt", "w");
    putc('c',re);
    putc('c',re);
    putc('c',re);
    putc('c',re);
    putc('c',re);


    fclose(re);
    return 0;
}