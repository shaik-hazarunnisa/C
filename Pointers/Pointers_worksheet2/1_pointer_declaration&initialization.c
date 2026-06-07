/******************************************************************************
1.Pointer Declaration and Initialization
Goal: Declare pointers for various data types and initialize them properly to 
point to existing variables or dynamically allocated memory. Use pointer 
arithmetic and typecasting appropriately.

Activity:

1.Declare pointers to different data types (int, float, char).
2.Dynamically allocate memory for these pointers.
3.Assign addresses of variables to pointers and access their values through 
the pointers.
4.Perform pointer arithmetic to move through allocated memory blocks.
5.Use typecasting to convert pointers between compatible type
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main() {
    int a=10;
    float b=20.5;
    char c='A';
    int*p_int;
    float*p_float;
    char*p_char;
    p_int=(int *)malloc(sizeof(int)*3);
    p_float=(float*)malloc(sizeof(float));
    p_char=(char*)malloc(sizeof(char));
    *p_int=a;
    *p_float=b;
    *p_char=c;
    printf("Integer value: %d\n", *p_int);
    printf("Float value: %.2f\n", *p_float);
    printf("Char value: %c\n", *p_char);
    for(int i=0;i<3;i++) {
        *(p_int+i)=i+1;
    }
    printf("Array using pointer:\n");
    for(int i=0; i<3;i++) {
        printf("%d ",*(p_int+i));
    }
    printf("\n");
    void*generic_ptr;
    generic_ptr=p_int;
    int *new_ptr=(int*)generic_ptr;
    printf("First element using typecast: %d\n",*new_ptr);
    free(p_int);
    free(p_float);
    free(p_char);

    return 0;
}