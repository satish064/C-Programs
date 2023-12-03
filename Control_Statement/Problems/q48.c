#include<stdio.h>
int main(void)
{
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j)
            printf("\\");
            else if((i+j)==n+1)
            printf("/");
            else 
            printf("*");
        }printf("\n");
    }
    return 0;
}