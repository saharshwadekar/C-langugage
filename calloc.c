#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int *ptr;
    printf("Enter the number of INTEGERs: ");
    scanf("%d",&n);
    ptr = (int *)calloc(n, sizeof(int));
    for(int i=1;i<=n;i++){
        printf("Enter the value of %d element : \n",i);
        scanf("%d",&ptr[i]);
    }
    for(int i=1;i<=n;i++){
        printf("the value of %d element is %d \n",i , ptr[i]);
    }
    return 0;
}