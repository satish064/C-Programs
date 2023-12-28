#include<stdio.h>
//fibo 1 1 2 3 ... 
int fibo(int n)
{
    if(n==1 || n==2)
    return 1;
    return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int fibod = fibo(6);
    printf("%d",fibod);
    return 0;
}