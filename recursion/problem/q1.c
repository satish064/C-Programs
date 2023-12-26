#include<stdio.h>
void Print(int n)
{
    if(n==1)
    printf("Satish");
    else
    {
        printf("Satish");
        Print(n-1);
    }
}
int main()
{
    Print(5);
    return 0;
}