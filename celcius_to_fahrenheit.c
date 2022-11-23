#include<stdio.h>
float temperature(float t);
int main()
{
    float t;
    printf("Entre the temperature in celcius\n");
    scanf("%f",&t);
    printf("temperature in fahrenheit is %f",temperature(t));
    
    return 0;
}
float temperature(float t){
    float result;
    result = (float)((9*t)/5)+32;
    return result;
}
