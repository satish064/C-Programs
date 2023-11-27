#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n+1-i;j++)
        {
            printf("%2d",i);
        }printf("\n");
    }
    return 0;
}