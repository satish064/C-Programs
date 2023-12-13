#include<stdio.h>
int sumPrDivisors(int);
void perfect_amicable(void);
int main(void)
{
    perfect_amicable();
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
void perfect_amicable(void)
{
    int i,j,k;
    for(i=1;i<=2000;i++)
    {
        if(sumPrDivisors(i)==i)
        printf("Perfect number : %d\n",i);
        for(j=1;j<=2000;j++)
        {
            if(i!=j && sumPrDivisors(j)==i && sumPrDivisors(i)==j)
            printf("Amicable number: %d %d\n",i,j);
        }
    }
}