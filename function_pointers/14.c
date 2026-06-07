/*****************************************************************************
           14. Chained Function Pointer Calls
        ◦ Write several functions that transform an integer (e.g., doubleValue, increment, square).
        ◦ Log Session an array of function pointers representing a pipeline of operations.
        ◦ Pass a number through the pipeline by applying each function in sequence, using the array of pointers.
*******************************************************************************/
#include <stdio.h>

int doubleValue(int x)
{
    return x*2;
}

int increment(int x)
{
    return x+1;
}

int square(int x)
{
    return x*x;
}

int main()
{
    int x,i;
    int (*f[3])(int)={doubleValue,increment,square};

    scanf("%d",&x);

    for(i=0;i<3;i++)
        x=f[i](x);

    printf("%d\n",x);

    return 0;
}