#include<stdio.h>
int main(void)
{
    long long int cube = 0;
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    /*
    for(i=1;i<=n;i++)
    {
        if(i%3==0)
        cube += i*i*i;
    }
    */
   for(i=1;i<=n;i++)
   {
    if(i%3!=0)
    continue;
    cube += i*i*i;
   }
    printf("Sum = %d",cube);
    return 0;
}