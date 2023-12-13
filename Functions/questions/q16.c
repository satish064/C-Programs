#include<stdio.h>
#include<math.h>
int prime(int);
void twinPrime(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    twinPrime(n);
    return 0;
}
void twinPrime(int n)
{
    int d;
  for(int i = 1;i<=n;i++)
  {
    if(prime(i) && prime(i+2))
    {
        int d = i + 2;
        printf("(%d %d)\t",i,d);
    }
  }
}
int prime(int n)
{
  for(int i = 2;i<=sqrt(n);i++)
    if(n%i==0)
    return 0;
    if(n==1)
    return 0;
    return 1;
}