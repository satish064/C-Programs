#include<stdio.h>
int main(void)
{
    int arr[9]={82,42,49,8,25,52,36,93,59},i,j;
    for(i=0;i<9-1;i++)
    {
        int min=i;
        for(j=i+1;j<9;j++)
        {
            if(arr[min]>arr[j])
            min=j;
        } 
        if(min!=i)
            {
                int temp = arr[i];
                arr[i] = arr[min];
                arr[min] = temp;
            }
    }
    printf("Sorted Array: ");
    for(i=0;i<9;i++)
    printf("%d\t",arr[i]);
    
    return 0;
}