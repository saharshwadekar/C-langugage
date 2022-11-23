#include <stdio.h>

int main()
{
    char str[100];
    int a,count=0;
    printf("ENTER THE STRING TO COUNT THE VOVELS\n");
    scanf("%s",&str[0]);
    //gets(str);
    printf("String : %s\n",str);
    for(a=0;str[a]!='\0';a++)
    {
        if(str[a]=='a'||str[a]=='e'||str[a]=='i'||str[a]=='o'||str[a]=='u'||str[a]=='A'||str[a]=='E'||str[a]=='I'||str[a]=='O'||str[a]=='U')
        {
            count++;
            printf("\nvowel : %c",str[a]);
        }
    }
    printf("\n%d",count);
}