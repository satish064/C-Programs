#include<stdio.h>
int main(void)
{
    int n;
    for(n=1; n<=5; n++)
    {
        if(n==3)
        break;
        printf("Number = %d\n",n);
    }
    return 0;
}