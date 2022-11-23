#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <stdlib.h>
//#include <time.h>

int main()
{
    int *ptr;
    // SIZE OF OPERATOR;
    // printf("int %lu\n", sizeof(int));
    // printf("float %lu\n", sizeof(float));
    // printf("char %lu\n",  sizeof(char));
    ptr = (int *) malloc(6 * sizeof(int));   // malloc return void pointer
    for(int i=1;i<=6;i++){
        printf("Enter the value of %d element : \n",i);
        scanf("%d",&ptr[i]);
        
    }
    for(int i=1;i<=6;i++){
        printf("the value of %d element is %d \n",i , ptr[i]);

    }

// REallocate 

    ptr = realloc(ptr, 10 * sizeof(int));
    for(int i=1;i<=10;i++){
        printf("Enter the value of %d element : \n",i);
        scanf("%d",&ptr[i]);
        
    }
    for(int i=1;i<=10;i++){
        printf("the value of %d element is %d \n",i , ptr[i]);

    }
    return 0;
}