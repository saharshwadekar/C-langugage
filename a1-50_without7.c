 #include <stdio.h>
 //#include <string.h>
 //#include <stdlib.h>
 //#include <time.h>
 
 int main()
 {
    int num,n,c;
    for(num=1;num<=50;num++)
    {
        if((num%10)!=7 && (num%7)!=0 )
        {
            printf("%d\n",num);
        }
        else{
            printf("\f");
        }
    }
    return 0;
 }