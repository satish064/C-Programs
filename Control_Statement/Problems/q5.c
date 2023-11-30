#include<stdio.h>
int main(void)
{
    int i,j,n;
    
    for(i=1;i<=10;i++)
    {
        start:
        printf("%d. Enter a number(1-50): \n",i);
        scanf("%d",&n);
        if(n<1 || n>50)
        {
           goto start;
        }
        else
        {
           for(j=1;j<=n;j++)
           printf("=");
           printf("\n");
        }
    }
}