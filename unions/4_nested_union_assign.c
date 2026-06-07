/******************************************************************************
ested Union
Log Session a union called Number which contains an int and a nested union with a float and a char.
Write code to assign and access values from both the outer and inner union members.
*******************************************************************************/
#include <stdio.h>
#include<string.h>
union Outer
{
    int x;
    union Inner
    {
    float f;
    char str[50];
    }inner;
};


int main()
{
    union Outer d;
    d.x=10;
    printf("Integer: %d\n",d.x);
    d.inner.f=5.4;
    printf("float: %f\n",d.inner.f);
    strcpy(d.inner.str,"Hello");
    printf("str: %s\n",d.inner.str);
}