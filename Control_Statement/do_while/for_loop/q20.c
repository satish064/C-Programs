#include<stdio.h>
int main(void)
{
    int i,n,sum=0,term=1;
    printf("Enter number of term : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=term;
        term = term+i;
    }
    printf("The sum of series upto %d terms is %d\n",n,sum);
    return 0;
}