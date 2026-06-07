/******************************************************************************
Exercise 20: Simulate Memory Fragmentation
Goal: Understand fragmentation with sequential malloc and free.
Activity:
    • Allocate multiple memory blocks of varying sizes.
    • Free some in between.
    • Allocate a new block that fits only in fragmented space.
    • Observe behavior.
    • Free all at the end.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    void *p1,*p2,*p3,*p4,*p5;
    p1 = malloc(100*sizeof(int));
    p2 =  malloc(200*sizeof(int));
    p3 = malloc(300*sizeof(int));
    p4 =  malloc(400*sizeof(int));

    printf("Allocated blocks:\n");
    printf("p1 = %p\n", p1);
    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);
    printf("p4 = %p\n", p4);
    free(p2);
    free(p3);

    printf("\nfreed p2 and p3 \n");
    p5 =  malloc(250*sizeof(int));
   printf("\nNew allocation p5 : %p\n", p5);
    printf("\nObserve whether p5 fits into freed space or new space.\n");
    free(p1);
    free(p4);
    free(p5);

    return 0;
}