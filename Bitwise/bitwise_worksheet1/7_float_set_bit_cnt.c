/******   Write a C program to count the number of set bits in an unsigned integer
*******************************************************************************/
#include <stdio.h>

int cnt_set_bit(unsigned int m)
{
    int i,n=0;
     for(i=0;i<32;i++)
    {
        if(m&(1<<i))
        n++;
    }
    return n;
}
int main()
{
    float num;
    unsigned int *p,n;
    printf("Enter the float num ");
    scanf("%f",&num);
    p=(unsigned int *)&num;
    n=cnt_set_bit(*p);
    printf("number of set in the guiven number is %d",n);
}