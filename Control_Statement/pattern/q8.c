#include<stdio.h>
int main(void)
{
    int n,c=5;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            printf("%d ",c);
        }printf("\n");c--;
    }return 0;
}