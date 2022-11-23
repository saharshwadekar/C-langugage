#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#include <time.h>

int main()
{
    int r , c; // here r->Rows & c->column;
    // for(c=1;c<=100;c++)
    // {
    //     printf("%d",c%10);
    // }
    // printf("\n");
    // for(c=1;c<=100;c++)
    // {
    //     if(c%10==0){
    //         printf("%d",c/10);
    //     }
    //     else{
    //         printf(" ");
    //     }
    // }
    //     printf("\n");
    
    for(r=1;r<=20;r++)
    {
        for(c=1;c<=150;c++)
        {
            // For L
            if((c==1 && r<=9) || (r==9 && c<=8)){ 
                printf("L");

            }
            // For E
            else if((c==10 && r<=9) || ( (r==5 || r==1 || r==9) && c<=17 && c>=10)){  
                printf("E");
            }
            // For T
            else if((r==1 && c>=19 && c<=27) || (c==23 && r<=9)){
                printf("T");
            }   
            // For U
            else if((c==33 && r<=9) || (r==9 && c>=33 && c<=41) || (c==41 && r<=9) ){
                printf("U");
            } 
            // for S
            else if(  ((r==1 || r==5 || r==9)&& ( c>=43 && c<=51))  || (c==43 && r<=5) || (c==51 && r>=5 && r<=9)){
                printf("S");
            }
            // For C
            else if(((r==11 || r==19) && (c>=1 && c<9)) || (c==1 && r>=11 && r<20)){
                printf("C");
            }
            // for O
            else if ((c==10 && r>=11 && r<20) || (c==17 && r>=11 && r<20) || (r==11 && c>=10 && c<=17) || (r==19 && c>=10 && c<=17)){
                printf("O");
            }
            // For F
            else if((r==11 && c>=19 && c<=27) || (r==15 && c>=19 && c<=24) || (c==19 && r>=11 && r<20)){
                printf("F");
            }
            // for F
            else if((r==11 && c>=29 && c<=36) || (r==15 && c>=29 && c<=34) || (c==29 && r>=11 && r<20)){
                printf("F");
            }
            // For E
            else if((c==38 && r>=11 && r<20) || ( (r==11 || r==15 || r==19) && c<=45 && c>=38)){  
                printf("E");
            }
            // For E
            else if((c==47 && r>=11 && r<20) || ( (r==11 || r==15 || r==19) && c<=54 && c>=47)){  
                printf("E");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
/*
Aim: To print "LET US C".
*/