#include<stdio.h>
long fac(int);
long comb(int,int);
int main(void)
{
    int i,j,k;
    printf("Enter number of rows for Pascal's triangle : ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        for(j=0;j<=i;j++)
        printf("%5ld",comb(i,j));
        printf("\n");
    }
    return 0;
}
long comb(int n,int r)
{
     long c;
     c = fac(n)/(fac(r)*fac(n-r));
     return c;
}
long int fac(int n)
{
    long int fact = 1;
    if(n==0)
    return 1;
    for(int i=n;i>1;i--)
    fact*=i;
    return fact;
}