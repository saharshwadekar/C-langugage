#include<stdio.h>
int main(){
    int r,c;
    for(r=1;r<=9;r++){
        for(c=1;c<=9;c++){
            if((r==1 && c<=5) || c==5 || (r==9 && c>=5) || r==5 || (c==1 && r>=5) || (c==9 && r<=5) || (c==3 && r==3) || (c==3 && r==7) || (c==7 && r==3) || (c==7 && r==7))
            {
                printf("%02d",c);
            }
            else{
                printf("..");
            }
        }
        printf("\n");
    }
}
//Home Work
// complete the swastik symbol 
// make spoon
/*
\
 \
  \_|
*/
// gride of 70x20
