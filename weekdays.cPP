#include <stdio.h>
#include <conio.h>

void find(int week){
     switch(week)
    {
        case 1: 
            printf("Monday");
            break;
        case 2: 
            printf("Tuesday");
            break;
        case 3: 
            printf("Wednesday");
            break;
        case 4: 
            printf("Thursday");
            break;
        case 5: 
            printf("Friday");
            break;
        case 6: 
            printf("Saturday");
            break;
        case 7: 
            printf("Sunday");
            break;
        default: 
            printf("Invalid");
    }

}

void main()
{
    int week;
    
    /* Input week number from user */
    printf("Enter week number(1-7): ");
    scanf("%d", &week);
    find(week);
    gatch();
}