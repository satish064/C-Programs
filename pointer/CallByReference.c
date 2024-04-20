#include<stdio.h>
void trySwap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside trySwap - a: %d, b: %d\n",*a,*b);
}
int main() {
  int x = 10, y = 20;

  printf("Before trySwap - x: %d, y: %d\n", x, y);

  trySwap(&x,&y);

  printf("After trySwap -x: %d, y: %d\n",x,y);
return 0;
}