/********************************************************************************************  
    13. Write a program to reverse:
        ◦ Bits at odd positions
        ◦ Bits at even positions
*******************************************************************************/
#include <stdio.h>
void print(int);
void even(int x)
{
    int i,j=0;
    for(i=0;i<32;i++)
    {
        if((i%2==0))
        {
            x^=1<<i;
        }
    }
    
    print(x);
}
void odd(int x)
{
    int i,j=0;
    for(i=0;i<32;i++)
    {
        if((i%2!=0))
        {
            x^=1<<i;
        }
    }
    
    print(x);
}
int main()
{
    unsigned int num,pos,n,num2,*p;
    printf("Enter the num ");
    scanf("%u",&num);
    
   even(num);
   odd(num);
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