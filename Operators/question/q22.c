#include<stdio.h>
int main(void)
{
    int dec;
    printf("Enter a decimal number: ");
    scanf("%d",&dec);
    printf("Hexadecimal value = %x\n Octal value = %o",dec,dec);
    return 0;
}