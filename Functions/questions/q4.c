#include<stdio.h>
int MRD(int);
int mPersistence(int);
int ProdDigits(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The MRd is %d of %d \n",MRD(n),ProdDigits(n));
    printf("The mPersistence is %d",mPersistence(n));
    return 0;
}
int mPersistence(int n)
{
    int mul = 0,c=0;
    do
    {
        mul = ProdDigits(n);
        c++;
        n=mul;
    } while (mul>=10);
    return c;
}
int MRD(int n)
{
    int mul = 0,c=0;
    while (n>=10)
    {
        mul = ProdDigits(n);
        c++;
        n = mul;
    }
    return mul;
}
int ProdDigits(int n)
{
    int mul = 1;
    while(n > 0)
    {
        mul *= n%10;
        n/=10;
    }
    return mul;
}