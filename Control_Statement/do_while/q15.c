#include<stdio.h>
int main(void)
{
    int n,c=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    do
    {
       c++;
       n/=10;
    } while (n);
    printf("Number of digits = %d",c);
}