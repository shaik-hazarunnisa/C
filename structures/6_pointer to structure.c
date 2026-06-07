/************************************
 * 6. Structure Pointers and Memory Access Goal Understand the use of pointers to structures for efficient memory access and how to use the arrow operator for member access. Activity Declare a pointer to a structure and allocate memory using malloc(). Use arrow operator to assign and print structure member values. Simulate memory-mapped peripheral access using structure pointers. Illustrate how structure pointers simplify code in register programming. 
 * always-initiali Tip: Always initialize structure pointers and check for NULL before dereferencing.
 * */
 
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    float marks;
};

int main() {
    struct Student *ptr;

    ptr=(struct Student *)malloc(sizeof(struct Student));

    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    ptr->id =101;
    ptr->marks =95.5;

    printf("ID: %d\n",ptr->id);
    printf("Marks: %.1f\n",ptr->marks);

    free(ptr);
    return 0;
}