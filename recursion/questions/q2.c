#include<stdio.h>
#include<math.h>
int countPrime(int,int);
int isPrime(int);
int main()
{
    int n,m;
    printf("Enter the two numbers: ");
    scanf("%d%d",&n,&m);
    printf("The prime number is: \n",countPrime(n,m));
    return 0;
}
int countPrime(int n,int m)
{
    if(n>m)
    return 0;
    else if(isPrime(m))
    {   printf("%d\t",m);
        return 1+countPrime(n,m-1);
        
        
    }
    else
    return countPrime(n,m-1);
}
int isPrime(int n)
{
    for(int i = 2;i<=sqrt(n);i++)
        if(n%i==0)
        return 0;
        return 1;
}