#include<stdio.h>
int main(void)
{
    int i,j,n,m=0,p=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        m=i;
        for(j=1;j<=i;j++)
        printf("%d",m++);
        m-=2;
        for(j=1;j<i;j++)
        printf("%d",m--);
        printf("\n");
    }return 0;
}