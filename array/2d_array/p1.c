#include<stdio.h>
#define ROW 3
#define COL 4
int main(void)
{
    int mat[ROW][COL],i,j;
    printf("Enter the elements of the matrix(%dx%d) row-wise :\n",ROW,COL);
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The martix that you have entered is :\n");

       for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}