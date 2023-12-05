#include<stdio.h>
#include<math.h>
int isPrime(int);
void printPrime(int,int);
int main(void)
{
    int n,m;
    printf("Enter two number : ");
    scanf("%d%d",&n,&m);
    void printPrime(n,m);
    return 0;
}
int isPrime(int n)
{
    for(int i = 2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return 0;
    }return 1;
}
void printPrime(int n,int m)
{
    for(n;n<=m;n++)
    {
        if(isPrime(n))
        printf("%d\t",n);
    }
}
