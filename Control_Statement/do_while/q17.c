#include<stdio.h>
int main(void)
{
   int emp_id;
   do
   {
    printf("Enter employee ID (100-500): ");
    scanf("%d",&emp_id);
   } while (emp_id<100 || emp_id>500);//
   
}