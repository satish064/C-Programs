#include<stdio.h>
int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            if((i+j) % 2 == 1)
            printf("0 ");
            else
            printf("1 ");
        } printf("\n");
    }
    return 0;
}