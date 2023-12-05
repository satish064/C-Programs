#include<stdio.h>
long int Binary(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Decimal = %d , Binary = %ld",n,Binary(n));
    return 0;
}
long int Binary(int n)
{
    int bin=0,a=1,rem;
    while(n>0)
    {
      rem = n % 2;
      bin = bin + rem * a;
      n /= 2;
      a *= 10;
    }
    return bin;
}