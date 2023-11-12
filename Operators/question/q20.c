#include<stdio.h>
int main(void)
{
    float cel,fer;
    printf("Enter the value of celsius: ");
    scanf("%f",&cel);
    fer = cel*9/5+32;
    printf("Fahrenheit value = %.2f",fer);
    return 0;
}