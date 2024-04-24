#include<stdio.h>

struct Student 
{
    int rollno;
    char name[10];
    float marks;
};

int main() 
{
    struct Student ram;
    //Input for Ram
    printf("Enter details for Ram:\n");
    printf("Roll No: ");
    scanf("%d",&ram.rollno);
    printf("Marks: ");
    scanf("%f",&ram.marks);
    // Output
    printf("\nStudent Details:\n");
    printf("Ram - Roll No: %d, Marks: %.2f\n",ram.rollno,ram.marks);
    return 0;
}