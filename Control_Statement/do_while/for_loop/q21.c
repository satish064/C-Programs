#include<stdio.h>
int main(void)
{
    int a=0,b=1,sum=0,n;
    printf("Enter the nth term fibonacci: ");
    scanf("%d",&n);
    printf("%d\t",b);
    for(int i = 1;i<n;i++)
    {
        sum = a+b;
        printf("%d\t",sum);
        a=b;
        b=sum;
    }
    return 0;
}