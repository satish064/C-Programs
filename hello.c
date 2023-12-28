#include<stdio.h>
void binary(int d)
{
  if(d==0)
  return;
  else{
    binary(d/2);
    printf("%d",d%2);
  }
}
int main()
{
  binary(50);
  return 0;
}
