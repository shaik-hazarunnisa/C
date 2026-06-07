/******************************************************************************
Union Declaration and Initialization
Declare a union named Data with an int, a float, and a char array of size 20.
Write a program to initialize and print each member, one after the other. Observe and explain the output.
*******************************************************************************/
#include <stdio.h>
union Data
{
    int x;
    float f;
    char str[50];
};

int main()
{
    int n;
    union Data data;
    printf("1.int,2.float,3.str");
    scanf("%d",&n);
    switch(n)
    {
        case 1:printf("Enter the int value:");
               scanf("%d",&data.x);
               printf("Integer %d",data.x);
               break;
        case 2:printf("Enter the float value:");
               scanf("%f",&data.f);
               printf("float %f",data.f);
               break;
        case 3:printf("Enter the string:");
               scanf("%s",&data.str);
               printf("string %s",data.str);
               break;
    }
}