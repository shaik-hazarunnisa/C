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
#pragma pack(1)
#include <stdio.h>
#include <stddef.h>  
struct Data {
    char  a;  
    int b;
    short c;  
};

int main() {
    printf("Size of struct: %lu\n", sizeof(struct Data));

    printf("Offset of a: %lu\n", offsetof(struct Data, a));
    printf("Offset of b: %lu\n", offsetof(struct Data, b));
    printf("Offset of c: %lu\n", offsetof(struct Data, c));

    return 0;
}
#pragma pack()