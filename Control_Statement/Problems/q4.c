#include<stdio.h>
int main(void)
{
    int i=0,n,g=0;
    while (i!=10)
    {
        printf("Enter a number: ");
        scanf("%d",&n);
        if(g<n)
        g=n;
        i++;
    }
    printf("Largest no is %d",g);
    return 0;
}