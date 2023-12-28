#include<stdio.h>
int divisibleBy11(long int n)
{
    int s1=0,s2=0,diff;
    if(n%11==0)
    return 1;
    if(n<11)
    return 0;
    while (n>0)
    {
        s1+=n%10;
        n/=10;
        s2+=n%10;
        n/=10;
    }
    diff = s1>s2 ? s1-s2 : s2 - s1;
    return divisibleBy11(diff);
}
int main()
{
    long int n = 91628153;
    //printf("Enter a number: ");
    //scanf("%ld",&n);
    if(divisibleBy11(n)==1)
    printf("YES");
    else
    printf("No");
    return 0;
}