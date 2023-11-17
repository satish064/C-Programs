#include<stdio.h>
int main(void)
{
    int n,ld,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n)
    {
        ld=n%10;
        sum+=ld;
        n/=10;
    }
    printf("Sum=%d",sum);
    return 0;
}