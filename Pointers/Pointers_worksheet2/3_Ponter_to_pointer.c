/******************************************************************************
3.Pointer to Pointer (Double Pointer)

Goal: Understand how to use double pointers for indirect referencing and 
dynamic memory management.

Activity:
1. Declare a double pointer and use it to dynamically allocate memory for a single
variable or an array.
2. Access and modify the allocated memory via the double pointer.
3. Pass double pointers to functions to dynamically allocate or modify memory 
inside the function.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void f1(int **ptr) {
    *ptr=(int*)malloc(sizeof(int)*3);
}
void f2(int**ptr) {
    for(int i=0;i<3;i++) {
        *(*ptr+i)=(i+1)*10;
    }
}
int main() {
    int*p=NULL;
    int**dp=&p;
    f1(dp);
    f2(dp);
    printf("Values:\n");
    for(int i=0;i<3;i++) {
        printf("%d ",*(*dp + i));
    }
    free(p);
    return 0;
}