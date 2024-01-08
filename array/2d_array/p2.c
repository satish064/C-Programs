#include<stdio.h>
#define ROW 3
#define COL 4
int main(void)
{
    int mat1[ROW][COL],mat2[ROW][COL],sum[ROW][COL],i,j;
    printf("Enter the elements of the matrix(%dx%d) 1 row-wise :\n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Enter the elements of the matrix(%dx%d) 2 row-wise :\n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&mat2[i][j]);
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf("The sum of the martix is :\n");

       for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}