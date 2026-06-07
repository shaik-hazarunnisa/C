/******************************************************************************
Goal
Understand how structures and unions differ in terms of memory layout, access, and use in embedded systems, particularly in data interpretation and memory saving.

Activity
Define a structure and a union with three different data types (e.g., char, int, float).
Print the size of each and compare.
Write values to each member and observe the behavior.
Map the union onto a byte buffer and visualize how different types share memory.
Document a scenario where only one data type is valid at a time (e.g., packet command structure).
Tip: Use sizeof() and printf() to track memory usage and value overlap.
*******************************************************************************/

#include <stdio.h>

struct mystruct
{
    int x;
    float f;
    char ch;
};

union myunion
{
    int x;
    float f;
    char ch;
};

int main()
{
    struct mystruct s;
    union myunion u;
    s.x=10;
    s.f=5.5;
    s.ch='a';
    printf("Int value %d\nfloat value %f\nchar value  %c\n",s.x,s.f,s.ch);
    u.x=10;
    u.f=5.5;
    u.ch='a';
     printf("Int value %d\nfloat value %f\nchar value  %c\n",u.x,u.f,u.ch);
     printf("Size of structure :%d\n",sizeof(struct mystruct));
      printf("Size of union :%d\n",sizeof(union myunion));
}
