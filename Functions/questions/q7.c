#include<stdio.h>
int sumPrDivisors(int);
void amicableNumber(int,int);
int main(void)
{
    int n,m;
    printf("Enter the range: ");
    scanf("%d%d",&n,&m);
    amicableNumber(n,m);
    return 0;
}
int sumPrDivisors(int n)
{
    int sum = 0;
    for(int i = 1;i<=n/2;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    return sum;
}
void amicableNumber(int n,int m)
{
    int i,j;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i!=j && sumPrDivisors(i)==j && sumPrDivisors(j)==i )
            printf("%d %d\t",i,j);
        }
    }
}