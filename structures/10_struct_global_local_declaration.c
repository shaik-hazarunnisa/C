/************************************
.10. Structure Declaration and Initialization
Goal
Understand the proper way to declare and initialize structures using multiple techniques and best practices.

Activity
Declare structure variables globally, locally, and statically.
Use designated initializers for clarity.
Use typedef to create aliases for complex structures.
Discuss structure initialization in embedded register mapping.
Tip: Static initialization is preferred for compile-time register definitions.

 * */
#include <stdio.h>

struct Student {
    int id;
    float marks;
};

struct Student s1;  

int main()
{
    struct Student s2;
    s1.id=101;
    s1.marks=45;
     printf("Globally Declared structure\n");
     printf("ID : %d \nMarks : %.2f\n",s1.id,s1.marks);
    s2.id=102;
    s2.marks=48;
     printf("Locally Declared structure\n");
     printf("ID : %d \nMarks : %.2f\n",s2.id,s2.marks);
}