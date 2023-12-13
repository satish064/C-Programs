#include<stdio.h>
int product(int , int);
int quotient(int , int);
int Remainder(int , int);
int main(void)
{
    int n,m;
    printf("Enter two number: ");
    scanf("%d%d",&n,&m);
    printf("Product = %d\n",product(n,m));
    printf("quotient = %d\n",quotient(n,m));
    printf("Remainder = %d",Remainder(n,m));
    return 0;
}
int product(int n,int m)
{
    int pro = 0;
    for(int i = 1;i<=m;i++)
    {
        pro+=n;
    }
    return pro;
}
int quotient(int n,int m)
{
    int q=0;
    while(n>=m)
    {
        n-=m;
        q++;
    }
    return q;
}
int Remainder(int n,int m)
{
    while(n>=m)
    {
        n-=m;
    }
    return n;
}