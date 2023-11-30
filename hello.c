#include<stdio.h>
int main(void)
{
  int i=1 , s = 1,sum = 0;
  while(i<=20)
  {
    printf("%d ",s);
    s=s+3;
    sum += s;
    i++;
  }
  /*for(i;i<=5;i++)
  {
    sum+=i;
  }*/
  printf("Sum = %d",sum);
  return 0;
}