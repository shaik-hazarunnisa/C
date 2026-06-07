/*****************************************************************************
            15. Multi-dimensional Function Pointer Array
        ◦ Define arithmetic functions for both int and float types (e.g., intAdd, floatAdd).
        ◦ Organize the function pointers in a two-dimensional array:
        ◦ First dimension: operation type (arithmetic, bitwise)
        ◦ Second dimension: data type (int, float)
        ◦ Demonstrate calling the correct function based on selected type and operation.
*******************************************************************************/
#include <stdio.h>

int intAdd(int a,int b){return a+b;}
int intSub(int a,int b){return a-b;}
int intAnd(int a,int b){return a&b;}
int intOr(int a,int b){return a|b;}

float floatAdd(float a,float b){return a+b;}
float floatSub(float a,float b){return a-b;}
float floatDummy(float a,float b){return 0;}

int main()
{
    int op,type;
    scanf("%d%d",&op,&type);
   int (*intOps[2][2])(int,int)={{intAdd,intSub},{intAnd,intOr}};
    float (*floatOps[2][2])(float,float)={{floatAdd,floatSub},{floatDummy,floatDummy}};

    if(type==1)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        printf("%d\n",intOps[op-1][0](a,b));
    }
    else if(type==2)
    {
        float a,b;
        scanf("%f%f",&a,&b);
        printf("%.2f\n",floatOps[op-1][0](a,b));
    }
    else
        printf("Invalid\n");
    return 0;
}