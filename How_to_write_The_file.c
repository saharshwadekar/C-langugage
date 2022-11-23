#include <stdio.h>
//#include <math.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>


// Generate.txt
int main()
{
    int num =45;
    FILE *pla;
    pla = fopen("Generated.txt", "w");
    fprintf(pla,"The number is %d \n\t AND \nMy name is Saharsh",num);
    fclose(pla);
    return 0;
}