#include<stdio.h>
long factorial(int);
long per(int,int);
long comb(int,int);
int main()
{
   int n,r;
   printf("Enter n and r : ");
   scanf("%d%d",&n,&r);
   printf("Total combinations are : %ld\n",comb(n,r));
   printf("Total permutations are : %ld\n",per(n,r));
   return 0;
}
long factorial(int n)
{
    long int fac=1;
    if(n==0)
    return 1;
    for(int i = 1;i<=n;i++)
    fac*=i;
    return fac;
}
long per(int n,int r)
{
    long p = factorial(n)/factorial(n-r);
    return p;
}
long comb(int n,int r)
{
    long c = per(n,r)/factorial(r);
    return c;
}