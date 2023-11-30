#include<stdio.h>
int main(void)
{
    int r=0,d,n,p;
    printf("Enter a number: ");
    scanf("%d",&n);
    p=n;
    while (n>0)
    {
        d = n % 10;
        r = r * 10 + d;
        n /= 10;
    }
    if(p==r)
    printf("%d is palindrome",p);
    else
    printf("%d is not a plaindrome",p);
    return 0;
}