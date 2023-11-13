#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0)
    printf("Number is negative");
    return 0;
}