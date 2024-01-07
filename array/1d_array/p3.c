#include<stdio.h>
int main()
{
    int ec=0,oc=0,arr[10];
    for(int i = 0;i<10;i++)
    {
        printf("Enter the value for arr[%d]\n",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        ec++;
        else
        oc++;
    }
    printf("Even numbers = %d\n Odd Numbers = %d",ec,oc);
    return 0;
}