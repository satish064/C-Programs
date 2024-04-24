#include<stdio.h>

struct Student 
{
    int rollno;
    char name[10];
    float marks;
};

int main() 
{
    // Direct Initialization
    struct Student s1 = {1, "Alice", 85.5};
    // Designated Initialization
    struct Student s2 = {.rollno = 2, .marks = 95.5 , .name = "Satish"};
    // Zero Initialization
    struct Student s3 = {0};
    // Copy Initialization
    struct Student s4 = s1;

    printf("Student1: %d, %s, %.1f\n",s1.rollno,s1.name,s1.marks);
    printf("Student2: %d, %s, %.1f\n",s2.rollno,s2.name,s2.marks);
    printf("Student3: %d, %s, %.1f\n",s3.rollno,s3.name,s3.marks);
    printf("Student1: %d, %s, %.1f\n",s4.rollno,s4.name,s4.marks);

}