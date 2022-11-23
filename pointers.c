// #include <stdio.h>

// int main()
// {
//     int i = 8;
//     int *j = &i; // a pointer variable which store the assress of another variable
//     int **k = &j;
//     printf("The value of i is %d.\n", i);
//     printf("The value of i is %d.\n", *j);
//     printf("The value of j is %u.\n", *(&j));
//     printf("The address of i is %u.\n", &i);
//     printf("The address of i is %u.\n", j);
//     printf("The address of j is %u.\n", &j);
//     printf("The value of j is %u.\n", **k);
//     printf("The value of j is %u.\n", *&k);
//     return 0;
// }
// /******************************************************************************************************************************/
// /******************************************************************************************************************************/

// // we can further store the addess pointer to pointer

// /******************************************************************************************************************************/
// /******************************************************************************************************************************/
// call by value:-
#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a = 4, b = 7;
    printf("The value of a and b is %d and %d\n", a, b);
    printf("The sum of 4+7 is %d\n", sum(a, b));
    printf("The value of after function a and b is %d and %d\n", a, b);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    b = 3423423;//-------||-----
    a = 35235;// it is independent // it does not change with out pointer value;
    return c;
}

/******************************************************************************************************************************/
// call by referance
// #include <stdio.h>
// void wrong_swap(int a, int b);
// void swap(int *a, int *b);
// int main()
// {
//     int a = 3, b = 4;
//     printf("The value  before of a and b is %d and %d.\n", a, b);
//     wrong_swap(a, b);
//     printf("The value in wrong_swaping is %d and %d of a and b\n",a,b);// will not work due to call by value.
//     swap(&a, &b); // will n work due to call by value.;
//     printf("The value after swap of a and b is %d and %d.\n", a, b);

//     return 0;
// }
// void wrong_swap(int a, int b)  // this a and b are copy
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }
// void swap(int *a, int *b)  // here a and b is original due to address.
// {
//     int temp;
//     temp = *a;                           // &x --> address
//     *a = *b;                             // *x --> value of address
//     *b = temp;
// }
/******************************************************************************************************************************/
/******************************************************************************************************************************/
// Question time
/******************************************************************************************************************************/
/******************************************************************************************************************************/
// 1.
// #include<stdio.h>

// int main()
// {
//     int a = 7;
//     int *ptr;
//     ptr = &a;
//     printf("value of a is %d\n",a);
//     printf("Address of a is %u\n",ptr);
//     printf("value of a is %d\n",*ptr);
//     return 0;
// }
/******************************************************************************************************************************/
// 2.
// #include <stdio.h>
// void printadd(int a)
// {
//     printf("The address of variable i is %u\n", &a);
// }
// int main()
// {
//     int i = 98;
//     printf("value of variable i is %d\n", i);
//     printadd(i);
//     printf("The address of variable i is %u\n", &i);
//     return 0;
// }
/******************************************************************************************************************************/
// 3.  
// #include <stdio.h>
// void sum_and_avg(int a, int b, int *sum, float *avg)
// {
//     *sum = a + b;
//     *avg = (float)*sum / 2;
// }
// int main()
// {
//     int i = 3, j = 6;
//     int sum;
//     float avg;
//     sum_and_avg(i, j, &sum, &avg);
//     printf("The value of sum is %d\n",sum);
//     printf("The value of avg is %f\n",avg);
//     return 0;
// }
/******************************************************************************************************************************/
// #include <stdio.h>

// int main()
// {
//     int a = 7987;
//     int *ptr;
//     int **ptr_ptr;

//     ptr = &a;
//     ptr_ptr = &ptr;

//     printf("The value of a is %d\n", **ptr_ptr);
//     return 0;
// }
/******************************************************************************************************************************/
// #include <stdio.h>
// void changevariable(int a)
// {
//     int v;
//     v=10*a;
    
    
// }
// int main()
// {
//     int i = 5;
//     changevariable(i);
//     printf("The value after the funtion  i is %d\n",i);

//     return 0;
// }
/******************************************************************************************************************************/
//6.
