/************************************
. S9. Introduction to Structures in C
Goal
Grasp the basic concept of structures in C, including their need, syntax, and difference from arrays and unions.

Activity
Define a simple structure with multiple data types.
Compare it with an array and a union with similar members.
Initialize the structure in different ways and print values.
Analyze why structures are preferred in peripheral register grouping.
Tip: Structures allow logically grouping different data types under one name.



 * */
#include <stdio.h>

struct Student {
    int id;
    float marks;
    char grade;
};

int main() {
    struct Student s1;
    struct Student s2={102,95.5,'A'};
    
    int marks[3]= {45,50,46} , i;
    
    s1.id = 101;
    s1.marks = 92.5;
    s1.grade = 'A';
    
    printf("ID: %d\n", s1.id);
    printf("Marks: %.2f\n", s1.marks);
    printf("Grade: %c\n", s1.grade);

 printf("ID: %d\n", s2.id);
    printf("Marks: %.2f\n", s2.marks);
    printf("Grade: %c\n", s2.grade);

    printf("Array elements:\n");
    for(i=0;i<3;i++)
    {
        printf("%d ",marks[i]);
    }
    return 0;
}