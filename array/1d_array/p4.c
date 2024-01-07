#include<stdio.h>
int main()
{
    int arr[5],max=0,min=0;
    for(int i = 0;i<5;i++)
    {
        printf("Enter the value for arr[%d]: ",i+1);
        scanf("%d",&arr[i]);
        max=min=arr[0];
        if(max<arr[i])
        max=arr[i];
        if(min>arr[i])
        min=arr[i];
    }
    printf("Max=%d\t Min=%d",max,min);
    return 0;
}