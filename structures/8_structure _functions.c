/************************************
. Structures and Functions
Goal
Learn how to pass structures to and return structures from functions and understand the trade-offs between pass-by-value and pass-by-reference.

Activity
Write a function that takes a structure as a value argument and modifies it.
Write a function that takes a pointer to structure and modifies it.
Return a structure from a function and print its values.
Measure memory usage and performance difference between pass-by-value and reference.
Tip: Prefer passing by pointer in embedded systems for performance and memory efficiency.


 * */
#include <stdio.h>

typedef struct {
    int id;
    float marks;
} Student;

void update1(Student s) {   
    s.marks=49;
}


void update2(Student *s) {   
    s->marks=49;
}

int main() {
    Student s1 = {1, 50};
   update1(s1);

    printf("Marks: %.2f\n", s1.marks); 
    update2(&s1);
     printf("Marks: %.2f\n", s1.marks); 
    return 0;
}