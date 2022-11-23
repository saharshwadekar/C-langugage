 #include <stdio.h>
 //#include <string.h>
 //#include <stdlib.h>
 //#include <time.h>
 
 int main()
 {
    int num , n;
    for(num=1;num<=50;num++){
        printf("\n\nTable of %d is: \n",num);
        for(n=1;n<=10;n++){
            if((num%10)!=7 && (n%10)!=7 && ((num*n)%10)!=7){
            printf("%2d x %2d = %2d\n",num,n,num*n);
            }
            else{
                printf("\n");
            }      
            }
    }
     return 0;
 }