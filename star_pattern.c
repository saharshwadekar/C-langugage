#include<stdio.h>
void starprint(int n);
int main()
{
    int n=7;
    starprint(n);
    return 0;
}
void starprint(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    starprint(n-1);
    for(int i=0;i<(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}