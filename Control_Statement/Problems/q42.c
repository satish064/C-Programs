#include<stdio.h>
int main(void)
{
   int n,i=1;
   int m=1,sum=0;
   printf("Enter a term: ");
   scanf("%d",&n);
   do
   {
    sum+=m;
    m=m*10+1;
    i++;
   } while (i<=n);
   printf("%d",sum);
   return 0;
}