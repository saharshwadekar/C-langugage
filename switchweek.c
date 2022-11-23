/**
 * C program to print day of week using switch case
 */

#include <stdio.h>

void find(int week){
    switch(week)
    {
        case 1: 
            printf("Monday\n");
            break;
        case 2: 
            printf("Tuesday\n");
            break;
        case 3: 
            printf("Wednesday\n");
            break;
        case 4: 
            printf("Thursday\n");
            break;
        case 5: 
            printf("Friday\n");
            break;
        case 6: 
            printf("Saturday\n");
            break;
        case 7: 
            printf("Sunday\n");
            break;
        default: 
            printf("Invalid input! Please enter week number between 1-7.\n");
    }
}

int main()
{
    int week;
    /* Input week number from user */
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    find(week);
    return 0;
}
