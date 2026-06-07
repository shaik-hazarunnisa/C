/************************************
Bit-fields in Structures
Goal
Learn to define and use bit-fields to manage individual bits for hardware register simulation.

Activity
Log Session a structure using bit-fields to represent an 8-bit status register.
Assign values to specific flags.
Log Session a mock register with error, ready, and mode bits.
Write code to toggle specific flags without using bitwise operators.
Reflect on how compilers handle ordering and alignment of bit-fields.
Tip: Bit-fields may behave differently on different compilers—don't assume portability.
*************************************************** */
 #include <stdio.h>

struct StatusReg {
   unsigned int ready :1;
   unsigned int error :1;
};

int main() {
    struct StatusReg reg;
   reg.ready =1;
    reg.error=0;
     printf("Ready: %d\n", reg.ready);
    printf("Error: %d\n", reg.error);
    return 0;
}