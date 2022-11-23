/*
made by;
    Saharsh wadekar
time;
    00:44:23 IST
*/

#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <stdlib.h>   
#include <time.h>     // for measuring time
#include <unistd.h>   // for delay 

float generatenum()    // for random number generator
{
    int num;
    srand(time(0));
    num = rand() % 10 + 1;
    return num;
}

void Ten_sec()    // countdown from 10
{
    int c = 10;
    printf("\n\nCountDown:\n");
    while (c != (-1))
    {
        printf("          %d\n", c);
        c--;
        sleep(1);
    }
}

void Three_sec()   // countdown from 3
{
    int t = 3;
    while (t != (-1))
    {
        printf("%d\n", t);
        t--;
        sleep(1);
    }
}

void Some_time_()
{
    int s=3;
    while (s!=0)
    {
        s--;
        sleep(1);
    }
    

}
void gamestart()   // Initiallisation
{
    system("clear");
    printf("Mind Reading Game starts in 10sec\n");
    Ten_sec();
}

void part_1()
{
    system("clear");
    printf("Select Any 'Integer Number' in between 1 to 10 in your Mind\n");
    printf("Don't share with any_one \n");
    Some_time_();
    Ten_sec();
}

void part_2()
{
    printf("Please multiply your number with __ x 2 == Ans\n");
    printf("shhuuu..!! Keep 'Ans' secret\n");
    Some_time_();
    Ten_sec();
}

void part_3(float i)
{
    printf("Now, please add  _'%.2f'_  with your Ans\n", i);
    Some_time_();
    Ten_sec();
}

void part_4()
{
    printf("Now, divide your final answer by '2'\n");
    Some_time_();
    Ten_sec();
}

void part_5()
{
    printf("Now, Substract your answer by that number you choose Initially\n");
    Some_time_();
    Ten_sec();
    printf("\nOK...");
}

void part_6()
{
    printf("Be ready for shock!!\n");
    Three_sec();
}

int main()
{
    int n = 10, c = 10;
    float a = generatenum();
    // printf("%.2f",a);     // ---> for cheacking wheather the program is right or wrong
    gamestart();

    part_1();

    system("clear");

    part_2();

    system("clear");

    part_3(a);

    system("clear");

    part_4();

    system("clear");

    part_5();

    system("clear");

    part_6();

    system("clear");

    printf("Your Answer is : %.2f\n\n", (float)(a / 2));

    return 0;
}