#include<stdio.h>
void table(int n);
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    table(n);
    return 0;
}
void table(int n)
{
    int i = 1;
    while(i<=10)
    {
        printf("%2d X %2d = %2d\n",n,i,n*i);
        i++;
    }
}