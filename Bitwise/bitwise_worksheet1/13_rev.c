/********************************************************************************************  
Write a program to reverse all bits in an integer.
*******************************************************************************/
#include <stdio.h>
void print(int);
void rev(int *x)
{
    int i,j=0;
    for(i=0,j=31;i<j;i++,j--)
    {
        if(((*x)&(1<<i))!=((*x)&(1<<j)))
        {
            *x^=1<<i;
            *x^=1<<j;
        }
    }
    
    
}
int main()
{
    unsigned int num,pos,n,num2,*p;
    printf("Enter the num ");
    scanf("%u",&num);
    print(num);
   rev(&num);
   print(num);
}
void print(int x)
{
    int i;
    for(i=31;i>=0;i--)
    {
        if((x&(1<<i)))
        {
            printf("1");
        }
        else
        printf("0");
    }
    printf("\n");
}