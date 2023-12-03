#include<stdio.h>
int main(void)
{
    int i,n,x;
    long int s=1,sum=0;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Enter the term: ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        s=s*x;
        sum+=s;
        i++;
    }
    printf("%d",sum);
    return 0;
}