#include<stdio.h>
#include<math.h>
void pfact(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    pfact(n);
    return 0;
}
void pfact(int n)
{
    int i=0;
   for(i=2;n!=1;i++)
   {
    while(n%i==0)
    {
        printf("%d ",i);
        n = n/i;
    }
   }   
}