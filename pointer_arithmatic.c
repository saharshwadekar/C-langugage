/*#include <stdio.h>

int main() // same for float.  increament in 4bytes
{
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    ptr++;
    // ptr++;
    // ptr--;
    // ptr--;

    printf("The value of ptr is %u\n", ptr);
    return 0;
}*/
#include <stdio.h>

int main()  // increament in 1bytes
{
    char i = 34;
    char *ptr = &i;
    printf("The value of ptr is %u\n", ptr);
    ptr++;
    // ptr++;
    // ptr++;
    // ptr--;
    // ptr--;

    printf("The value of ptr is %u\n", ptr);
    return 0;
}