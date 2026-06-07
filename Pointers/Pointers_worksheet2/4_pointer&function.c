/******************************************************************************
4.Pointer and Function

Goal: Use pointers to pass variables or arrays to functions so that the 
function can modify the original data.

Activity:

1.Write a function that takes pointers as parameters to swap two integer 
variables.
2.Log session a function that modifies the elements of an array via a pointer.
3.Pass a pointer to a function to update the contents of a structure or 
a dynamically allocated memory block.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void swap(int*a,int*b) {
    int temp=*a;
    *a=*b;
    *b=temp;
}
void modifyArray(int*arr,int n) {
    for(int i=0; i<n;i++) {
        *(arr+i)*=2;
    }
}
struct Student {
    int id;
    float marks;
};
void uStudent(struct Student *s) {
    s->id=101;
    s->marks =95.5;
}
int main() {
    int x=10,y=20;
    swap(&x,&y);
    printf("After swap: x = %d, y = %d\n",x,y);
    int arr[]={1, 2, 3, 4};
    int n=sizeof(arr)/sizeof(arr[0]);
    modifyArray(arr, n);
    printf("Modified array: ");
    for(int i=0;i<n;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n");
    struct Student s1;
    uStudent(&s1);
    printf("Student ID: %d\n",s1.id);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}