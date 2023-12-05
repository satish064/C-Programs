#include<stdio.h>
int reverse(int);
int isPalindrome(int);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    isPalindrome(n);
    return 0;
}
int reverse(int n)
{
    int sum=0;
    while(n>0)
    {
        sum = sum * 10 + n % 10;
        n/=10;
    }
    return sum;
}
int isPalindrome(int n)
{
    if(reverse(n) == n)
    printf("Number is Palindrome");
    else
    printf("Number is not Palindrome");
}