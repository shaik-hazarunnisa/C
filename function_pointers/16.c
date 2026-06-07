/*****************************************************************************
              16. Recursive Function Pointer
        ◦ Implement a recursive function (such as factorial or fibonacci) using a function pointer variable instead of directly calling the function by name.
        ◦ Show that the recursion works correctly using only the pointer.
*******************************************************************************/
#include <stdio.h>

int factFunc(int n,int (*f)(int))
{
    if(n<=1)
        return 1;
    return n*f(n-1);
}

int main()
{
    int n;
    int (*fp)(int);

    int wrapper(int x)
    {
        return factFunc(x,fp);
    }

    fp=wrapper;

    scanf("%d",&n);
    printf("%d\n",fp(n));

    return 0;
}