/********************************************************************************************  
Given two integers A and B, write a program to count the number of bits that need to be flipped to convert A into B.
*******************************************************************************/
#include <stdio.h>

void flip(int *x,int y)
{
    int i,j=0;
    for(i=0;i<31;i++)
    {
        if(((*x)&(1<<i))!=(y&(1<<i)))
        {
            *x^=1<<i;
            j++;
        }
        
    }
    printf("%d bits need to be flipped",j);
    
}
int main()
{
    unsigned int num,pos,n,num2,*p;
    printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the num2 ");
    scanf("%u",&num2);
   flip(&num,num2);
   
}