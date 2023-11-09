#include<stdio.h>
int main(void)
{
    int var;
    printf("Size of int=%u\n",sizeof(int));
    printf("Size of loat=%u\n",sizeof(float));
    printf("Size of var=%u\n",sizeof(var));
    printf("Size of an interger constant=%u\n",sizeof(45));
    return 0;
}