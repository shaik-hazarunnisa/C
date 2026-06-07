/*****************************************************************************
                17. Array of Function Pointers in a Structure
        ◦ Define a structure (e.g., Calculator) that contains an array of function pointers for operations (add, subtract, multiply).
        ◦ Instantiate the structure and use it to call the various operations on input values, demonstrating how the structure can perform different calculations.
*******************************************************************************/
#include <stdio.h>

int add(int a,int b){return a+b;}
int sub(int a,int b){return a-b;}
int mul(int a,int b){return a*b;}

struct Calculator
{
    int (*op[3])(int,int);
};

int main()
{
    struct Calculator c={{add,sub,mul}};
    int ch,a,b;

    scanf("%d",&ch);
    scanf("%d%d",&a,&b);

    if(ch>=1&&ch<=3)
        printf("%d\n",c.op[ch-1](a,b));
    else
        printf("Invalid\n");

    return 0;
}