/*****************************************************************************
               18. Replace Switch-Case with Function Pointer Table
        ◦ Simulate a command-based application where each command is represented by a number.
        ◦ Instead of using a large switch-case block to handle commands, create a function pointer table.
        ◦ Use the input command number as an index to call the corresponding handler function via the function pointer table.

*******************************************************************************/
#include <stdio.h>

void f1(){printf("Command 1\n");}
void f2(){printf("Command 2\n");}
void f3(){printf("Command 3\n");}

int main()
{
    int ch;
    void (*f[3])()={f1,f2,f3};

    scanf("%d",&ch);

    if(ch>=1&&ch<=3)
        f[ch-1]();
    else
        printf("Invalid\n");

    return 0;
}