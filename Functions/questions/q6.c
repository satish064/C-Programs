#include<stdio.h>
void PerfectNumSeries(int,int);
int main(void)
{
    int n,m;
    printf("Enter two numbers: ");
    scanf("%d%d",&n,&m);
    PerfectNumSeries(n,m);
    return 0;
}
void PerfectNumSeries(int n,int m)
{
    int i,j;
    for(i=n;i<=m;i++)
    {
        int sum = 0;
        for(j=1;j<=i/2;j++)
        if(i%j==0)
        sum+=j;
        if(sum == i)
        printf("%d ",sum);
    }
}