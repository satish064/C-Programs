#include<stdio.h>
int main()
{
    int arr[5];
    for(int i = 0;i<5;i++)
    {
        printf("Enter the value for arr[%d]\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<5;i++)
    {
        printf("Enter the value = %d\t",arr[i]);
    }
}