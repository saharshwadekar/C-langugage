#include <stdio.h> // how to encrypt
void encrypt(char *c){
    char *ptr=c;
    while(*ptr!='\0'){
        *ptr = *ptr + 1;
        ptr++;
    }
   
}
int main()
{
    char c[]="Shantanu_Sir";
    encrypt(c);
    printf("Encrypted string is :%s\n",c);
    return 0;
}

