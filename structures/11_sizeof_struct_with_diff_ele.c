/************************************
.11. Memory Layout of Structures
Goal
Analyze the internal memory layout of structures, including padding, alignment, and impact on memory optimization.

Activity
Define a structure and use sizeof() to observe unexpected sizes.
Use different data type orderings and compare structure size.
Simulate structure layout for peripheral memory mapping.
Apply structure packing using #pragma and compare memory efficiency.

 * */
 #pragma pack(1)
#include <stdio.h>

typedef struct {
    int id;
    float marks;
    char grade;
}Student1;

typedef struct
{
    char grade;
    float marks;
    int id;
} Student2;

int main()
{
    Student1 s1;
     Student2 s2;
    s1.id=101;
    s1.marks=45;
    s1.grade='A';
     printf("Structure 1\n");
     printf("ID : %d \nMarks : %.2f\nGrade : %c\n",s1.id,s1.marks,s1.grade);
     printf("Size :%d\n",sizeof(Student1));
    s2.grade='A';
    s2.id=102;
    s2.marks=48;
     printf("Structure 2\n");
       printf("ID : %d \nMarks : %.2f\nGrade : %c\n",s2.id,s2.marks,s2.grade);
          printf("Size :%d\n",sizeof(Student2));
}
#pragma pack()

