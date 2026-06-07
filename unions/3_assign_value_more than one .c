/******************************************************************************
Accessing Union Members
Using the union from exercise 1, assign values to more than one member at a time and print all members.
Observe which value is retained and explain why.
*******************************************************************************/
#include <stdio.h>
#include<string.h>
union Data
{
    int x;
    float f;
    char str[50];
};


int main()
{
    union Data d;
    d.x=10;
    d.f=5.4;
    strcpy(d.str,"Hello");
    printf("Integer: %d\n",d.x);
    printf("float: %f\n",d.f);
    printf("str: %s\n",d.str);
    printf("Explanation:\n All members shares the same memory so only one is valid \n As the float over writes the integer,string over writes the float \n so only str is stored in that union");
}