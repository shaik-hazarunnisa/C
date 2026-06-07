/******   Write macros to set, clear, and toggle the nth bit using bitwise operator
*******************************************************************************/
#include <stdio.h>
#include<math.h>
#define set_bit(x,n) x=x|(1<<n);
#define clear_bit(x,n) x=x&~(1<<n);
#define toggle_bit(x,n) x=x^(1<<n);
int main()
{
    unsigned int num,n;
    printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    set_bit(num,n);
    printf("%d\n",num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    clear_bit(num,n);
     printf("%d\n",num);
     printf("Enter the n bits ");
    scanf("%u",&n);
    toggle_bit(num,n);
     printf("%d",num);
}