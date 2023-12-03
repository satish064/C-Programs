#include<stdio.h>
int main(void)
{
    int n,x,i=1,s=1;
    long int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&x);
    printf("Enter the term: ");
    scanf("%d",&n);
    while(i<=n)
    {
        s = s*x;
        if(i%2==0)
        sum-=s;
        else
        sum+=s;
        i++;
    }
    printf("Sum=%d",sum);
    return 0;

}