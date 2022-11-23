// #include <stdio.h>

// int main()
// {
//     int arr[10];
//     int *ptr = &arr[0];
//     // int ptr = arr;
//     ptr = ptr + 2;
//     if (ptr == &arr[2])
//     {
//         printf("these point to the same location in memory\n");
//     }
//     else
//     {
//         printf("These do not point to the same location in memory\n");
//     }
//     return 0;
// }

/*************************************/
/*
#include <stdio.h>

int main()
{
    int mul[10];
    for( int i=0;i<10;i++)
    {
        mul[i]= 5*(i+1);
    }
    for( int i=0;i<10;i++)
    {
        printf(" 5 x %d = %d\n", i+1, mul[i]);
    }
    return 0;
}
*/
/*************************************/
/*
#include <stdio.h>
void reverse(int *arr, int n)
{
    int temp;
    for (int i = 0; i < (n/2); i++)    //   n/2 is nessesary to reverse
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    reverse(arr, 7);
    for (int i = 0; i < 7; i++){
        printf("THe value of element %d is %d\n", i ,arr[i]);
    }

    return 0;
}
*/

/*************************************/
// #include <stdio.h>
// void printTable(int *mulTable, int num, int n)
// {
//     printf("******************************************************\n\nThe multiplication table of %d is:\n", num);
//     for ( int i = 0; i < n; i++)
//     {
//         mulTable[i]=num*(i+1);
//     }
//     for ( int i = 0; i < n; i++)
//     {
//         printf("%d x %d = %02d\n",num , i+1, mulTable[i]);
        
//     }
//     printf("\n");
// }
// int main()
// {
//     int mulTable[3][10];
//     printTable(mulTable[0],2,10);
//     printTable(mulTable[0],7,10);
//     printTable(mulTable[0],9,10);
//         // for (int i = 0; i < 10; i++)
//         // {
//         //     mulTable[0][i] = 2 * (i + 1);
//         // }
//         // for (int i = 0; i < 10; i++)
//         // {
//         //     printf("2 x %d = %d\n", i + 1, mulTable[0][i]);
//         // }
//         // for (int i = 0; i < 10; i++)
//         // {
//         //     mulTable[0][i] = 7 * (i + 1);
//         // }
//         // for (int i = 0; i < 10; i++)
//         // {
//         //     printf("7 x %d = %d\n", i + 1, mulTable[0][i]);
//         // }
//         // for (int i = 0; i < 10; i++)
//         // {
//         //     mulTable[0][i] = 9 * (i + 1);
//         // }
//         // for (int i = 0; i < 10; i++)
//         // {
//         //     printf("9 x %d = %d\n", i + 1, mulTable[0][i]);
//         // }
//         return 0;
// }
/*************************************/
// #include <stdio.h>

// int main()
// {
//     int arr[2][3][4];
//     for(int x=0;x<2;x++)
//     {
//         for(int y=0;y<3;y++)
//         {
//             for(int z=0;z<4;z++)
//             {
//                 printf("The address of arr[%d][%d][%d] is %dn ",x,y,z,&arr[x][y][z]);
//             }
//         }
//     }
//     return 0;
// }