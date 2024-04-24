#include<stdio.h>

struct Student 
{
    int rollno;
    char name[10];
    float marks;
};

int main() 
{
    // Initializing an array of Student structures
    struct Student students[5] = 
    {
        {1, "Satish", 90.5},
        {2, "Rahul", 80.0},
        {3, "Mohit", 87.0},
        {4, "Gopal", 43.0},
        {5, "Shaym", 50.0}
    };

    for(int i = 0;i< 5;i++)
    {
        printf("Roll Number: %d\n",students[i].rollno);
        printf("Name: %s\n",students[i].name);
        printf("Marks: %.2f\n\n",students[i].marks);
    }
    return 0;
}