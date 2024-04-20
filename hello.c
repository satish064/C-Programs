#include<stdio.h>
int main(void)
{
  int arr[6]={20,40,50,60,30};
  int num=2;
  int value=90;

  for(int i=6-2;i>=num;i--)
  arr[i+1]=arr[i];

  arr[2]=value;
  

  for(int i=0;i<6;i++)
  printf("%d ",arr[i]);
}