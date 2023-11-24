#include<stdio.h>
int main(void)
{
    int cube=0,num,dig,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    i=num;
    while(num>0)
    {
      dig = num % 10;
      cube = dig * dig * dig;
      sum += cube;
      num/=10;
      if(i == sum)
      printf("Arm strong");
    }
}