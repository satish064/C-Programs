#include<stdio.h>
int main(void)
{
    int c=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n>0)
    {
        c++;
        n/=10;
    }
    if(c==0)
    printf("Number of digits = 1");
    else
    printf("Number of digits = %d",c);
    return 0;
}