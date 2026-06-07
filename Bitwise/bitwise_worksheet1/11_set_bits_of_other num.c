/********************************************************************************************  
mplement the function setbits(x, p, n, y) that sets n bits in x starting at position p with the rightmost n bits of y.
*******************************************************************************/
#include <stdio.h>

void set_bits(int *x,int p,int n,int y)
{
    int i,j=0;
    for(i=0;i<31;i++)
    {
        if((i==p)||(n!=0))
        {
            *x=(*x&~(1<<i))|(y&(1<<j));
            j++;
            n--;
        }
    }
    
}
int main()
{
    unsigned int num,pos,n,num2,*p;
    printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the num2 ");
    scanf("%u",&num2);
    printf("Enter the pos ");
    scanf("%u",&pos);
    printf("Enter the no of bits ");
    scanf("%u",&n);
   set_bits(&num,pos,n,num2);
    printf("%d",num);
}