#include<stdio.h>
int Sum_digits(int n)
{
    if(n<10)
    return n;
    else
    return n%10 + Sum_digits(n/10);
}
int main()
{
    int result = 0;
    result = Sum_digits(125);
    printf("%d",result);
    return 0;
}