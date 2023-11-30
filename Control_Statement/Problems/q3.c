#include<stdio.h>
int main(void)
{
    /*
    int i,j,m=1;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=8;j++)
        {
            printf("%d\t",m++);
        }printf("\n");
    }
    */
   int i;
   for(i=1;i<=80;i++)
   {
    if(i%8==0)
    printf("%d\n",i);
    else
    printf("%d\t",i);
   }
    return 0;
}