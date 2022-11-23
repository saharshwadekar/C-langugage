#include <stdio.h> // how to decrypt
void decrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr = *ptr - 1;
        ptr++;
    }
   
}
int main()
{
    char c[]="tbibsti";
    decrypt(c);
    printf("Decrypted strinf is %s\n",c);
    return 0;
}