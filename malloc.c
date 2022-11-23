#include <stdio.h>
//#include <math.h>
//#include <string.h>
#include <stdlib.h>
//#include <time.h>

int main()
{
    int *ptr ,n;
    printf("Enter the number of INTEGERs: ");
    scanf("%d",&n);
    // SIZE OF OPERATOR;
    // printf("int %lu\n", sizeof(int));
    // printf("float %lu\n", sizeof(float));
    // printf("char %lu\n",  sizeof(char));
    ptr = (int *) malloc(n * sizeof(int));   // malloc return void pointer
    for(int i=1;i<=n;i++){
        printf("Enter the value of %d element : \n",i);
        scanf("%d",&ptr[i]);
        
    }
    for(int i=1;i<=n;i++){
        printf("the value of %d element is %d \n",i , ptr[i]);

    }
    return 0;
}