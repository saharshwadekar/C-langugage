/* chapter 7 ---> Arrays */
// example: storing of elements in one place
// programmer no need to make to much variable
#include <stdio.h>

int main()
{
    // naive way to count marks
    // int marks1, marks2, marks3, marks4;
    // marks1=32;
    // marks2=82;
    // marks3=53;
    // marks4=63;
    //    int marks[4]; // allocate space for 4 integer
    // marks[0]=48;
    // marks[1]=23;
    // marks[2]=43;
    // marks[3]=54;
    int n;
    printf("Entre the number of student in class\n");
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++)
    {
        printf("Entre the marks obtained out of 100 by student %d:",i+1);
        scanf("%2d",&marks[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("Marks obtained by student %d is : %2d.\n",i+1 ,marks[i]);
    }
    return 0;
}