#include<stdio.h>

void minmax(int *a, int *b, int *min, int *max) 
{
    if(*a<*b)
    {
        *min = *a;
        *max = *b;
    }
    else
    {
        *min = *b;
        *max = *a;
    }
}

int main() 
{
    int a = 10, b = 20, min , max;
    minmax(&a,&b,&min,&max);
     printf("For a=%d and b=%d, min=%d and max=%d\n", a, b, min, max); 
}