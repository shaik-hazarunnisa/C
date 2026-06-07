/******************************************************************************
Anonymous Union
Declare an anonymous union inside a structure.
Initialize and access its members without using a union name.
Demonstrate how this simplifies access in code.
*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct data
{
    int x;
    union 
    {
    float f;
    char str[50];
    };
};

int main()
{
    struct data d;
    d.x=10;
    d.f=5.4;
    printf("Integer: %d\n",d.x);
    printf("float: %f\n",d.f);
    d.x=15;
    strcpy(d.str,"Hello");
    printf("Integer: %d\n",d.x);
    printf("str: %s\n",d.str);
    printf("This makes the code more readable,less typing");
}