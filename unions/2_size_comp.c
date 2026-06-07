/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
union Data
{
    int x;
    float f;
    char str[50];
};

struct data2
{
    int x;
    float f;
    char str[50];
};

int main()
{
    printf("sizeof union is %d\n",sizeof(union Data));
    printf("sizeof structure is %d",sizeof(struct data2));
    
}