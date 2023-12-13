#include<stdio.h>
float series(int);
int main(void)
{
    int n;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    int sum = series(n);
    printf("The sum of the series: %f",series(n));
    return 0;
}
float series(int n)
{
    int i = 1;
    float sum = 0;
    while(i<=n)
    {
        sum += (1.0/(i*i));
        i++;
    }
    return sum;
}