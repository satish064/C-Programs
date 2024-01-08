#include<stdio.h>
int main()
{
    int r=2,c=3,arr[r][r],arr1[r][c],pro[r][c];
    printf("Enter the first matrix: ");
    for(int i = 0;i<r;i++)
    for(int j =0;j<r;j++)
    scanf("%d",&arr[i][j]);

    printf("Enter the second matrix: ");
    for(int i=0;i<r;i++)
    {
        for(int j =0;j<c;j++)
        scanf("%d",&arr1[i][j]);
    }

    printf("The product of the matrix is: \n");
    for(int i=0;i<r;i++)
    {
         for(int j=0;j<c;j++)
        {
            pro[i][j]=0;
                for(int k=0;k<r;k++)
                {
                    pro[i][j] += arr[i][k]*arr1[k][j];
                }
            printf("%d ",pro[i][j]);
        }printf("\n");
    }
   return 0;
}