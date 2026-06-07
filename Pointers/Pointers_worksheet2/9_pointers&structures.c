/******************************************************************************
9. Pointer and Structures

Goal:

Use pointers to access and modify structure members efficiently, 
including passing structures to functions.

Activity:
1. Define a structure and create a pointer to it.
2. Use the pointer to read and modify structure members.
3. Pass structure pointers to functions that update structure data.
4. Dynamically allocate memory for structures and handle them via pointers.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
struct Student {
    int id;
    float marks;
};
void uStudent(struct Student *s) {
    s->id=101;
    s->marks=95.5;
}
int main() {
    struct Student *ptr;
    ptr=(struct Student*)malloc(sizeof(struct Student));
    if(ptr==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    ptr->id=1;
    ptr->marks=80.0;
    printf("Before update:\n");
    printf("ID: %d, Marks: %.2f\n",ptr->id,ptr->marks);
    uStudent(ptr);
    printf("After update:\n");
    printf("ID: %d, Marks: %.2f\n",ptr->id,ptr->marks);
    free(ptr);
    return 0;
}