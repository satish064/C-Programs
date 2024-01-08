#include<stdio.h>
int main()
{
  int a[5][5],row,columns,i,j;
  printf("Enter the order of the matrix. The order should be less than 5x5:\n");
  scanf("%d %d",&row,&columns);
  printf("Enter the elements of the matrix:\n");

  for(i=0;i<row;i++)
  for(j=0;j<columns;j++)
  scanf("%d",&a[i][j]);

  printf("The 3-Tuple representation of the matrix is:\n");

  for(i=0;i<row;i++)
  for(j=0;j<columns;j++)
  {
    if(a[i][j]!=0)
    printf("%d %d %d\n",(i+1),(j+1),a[i][j]);
  }
  return 0;
}