#include<stdio.h>

int main()
{
    int rollNumber[5] = {1,2,3,4,5};
    char names[5][10] = {"Manish", "Satish", "Rohit", "Anoop", "Monu"};
    float marks[5] = {90.5 , 85.0, 92.5, 88.0, 95.0};

    for(int i=0;i<5;i++) 
    {
        printf("Roll Number: %d\n",rollNumber[i]);
        printf("Name: %s\n",names[i]);
        printf("Marks: %2.f\n\n",marks[i]);
    }

    return 0;
}