#include<stdio.h>
int main() {
    int i = 3;
    int *j;

    j = &i;

    printf("Address of i =%p\n",&i);
    printf("Address of i =%p\n",j);
    printf("Address of j =%p\n",&j);
    printf("Value of j = %p\n",j);
    printf("Value of i = %d\n",i);
    printf("Value of i = %d\n",*j);
    printf("Value of i = %d\n",*(&i));
}