/******************************************************************************
8.Pointer and Multi-Dimensional Arrays

Goal:

Access and manipulate elements of multi-dimensional arrays using pointers 
and pointer arithmetic.

Activity:

1. Declare a 2D array.
2. Use pointers to iterate through rows and columns.
3. Implement operations such as matrix transpose or addition using pointer 
arithmetic only.
4. Pass multi-dimensional arrays as pointers to functions and manipulate elements.
*******************************************************************************/
#include <stdio.h>
void printMatrix(int *ptr,int rows,int cols) {
    for(int i=0;i<rows;i++) {
        for(int j= 0;j<cols;j++) {
            printf("%d ",*(ptr+i*cols+j));
        }
        printf("\n");
    }
}
void transpose(int*ptr,int rows,int cols) {
    int temp;
    for(int i=0;i<rows;i++) {
        for(int j=i+1;j<cols;j++) {
            temp=*(ptr+i*cols+j);
            *(ptr+i*cols+j)=*(ptr+j*cols+i);
            *(ptr+j*cols+i)=temp;
        }
    }
}
int main() {
    int mat[3][3] ={
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int *ptr=&mat[0][0];
    printf("Original Matrix:\n");
    printMatrix(ptr, 3, 3);
    transpose(ptr, 3, 3);
    printf("Transposed Matrix:\n");
    printMatrix(ptr, 3, 3);
    return 0;
}