#include<stdio.h>
int main(void)
{
  int n1=0,n2=1,n;
  printf("Enter a number: ");
  scanf("%d",&n);
  int i=3;
  while(n2!=n && n2<=n)
  {
    int term = n1;
    n1 = n2;
    n2 = term + n1;
    i++;
  }
  if(n2 == n)
  printf("%d Number is fibonacci number",n);
  else
  printf("%d Number is not a fibonacci number",n);
  return 0;
}