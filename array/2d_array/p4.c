#include<stdio.h>
int main()
{
    int r=3,c=4,arr[r][c],p[c][r],i,j;
    printf("Enter the matrix: ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    scanf("%d",&arr[i][j]);
    }
    
    printf("Entered matrix:\n");
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
    printf("%d ",arr[i][j]);
    printf("\n");
   }
    

    printf("Transpose matrix: ");
    for(i=0;i<c;i++)
    {
       for(j=0;j<r;j++)
    printf("%d ",arr[j][i]); 
     printf("\n");
    }
   

}