/******************************************************************************
Anonymous Union
Declare an anonymous union inside a structure.
Initialize and access its members without using a union name.
Demonstrate how this simplifies access in code.
*******************************************************************************/
#include <stdio.h>
#include<string.h>
union data
{
    int x;
    float f;
    char str[20];
};

int main()
{
   union data d;
   union data *p;
   p=&d;
    p->x=10;
    printf("Integer: %d\n",p->x);
    p->f=5.4;
    printf("float: %f\n",p->f);
    strcpy(p->str,"Hello");
    printf("str: %s\n",p->str);
}