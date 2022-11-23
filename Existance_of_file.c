#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("hello.txt", "r"); 
    if(ptr==NULL){                               // <---
        printf("The file does not exist\n");
    }
    else{
    fscanf(ptr, "%d" ,&num);            // it is able to scan the files
    fscanf(ptr, "%d" ,&num2);            // it is able to scan next-part of the files
    fclose(ptr);                // done with completion of editing
    printf("The value of num is %d\n", num);
    printf("The value of num2 is %d\n", num2);
    }
    return 0;
}