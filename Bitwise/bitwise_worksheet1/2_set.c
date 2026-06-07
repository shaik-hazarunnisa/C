/******************************************************************************
    3. Write a program to modify specific portions of a given integer:
        ◦ Set all bits in the Least Significant Byte (LSB) to 1
        ◦ Set all bits in the Most Significant Byte (MSB) to 1
        ◦ Set all bits in the Least Significant Nibble to 1
        ◦ Set all bits in the Most Significant Nibble to 1
        ◦ Set n bits to 1 (user input)
        ◦ Clear n bits (set to 0), with n as input
        ◦ Toggle n bits (user input)
    4. Write a program to check b

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    unsigned int num;
    printf("Enter the num ");
    scanf("%u",&num);
    //Set all bits in the Least Significant Byte (LSB) to 1
    num=num|0xff;
    printf("%u \n",num);
    //◦ Set all bits in the Most Significant Byte (MSB) to 1
    printf("Enter the num ");
    scanf("%u",&num);
    num=num|(0xff<<24);
    printf("%u ",num);
    //Set all bits in the Least Significant Nibble to 1
    printf("Enter the num ");
    scanf("%u",&num);
    num=num|0x0f;
    printf("%u ",num);
    //Set all bits in the Most Significant Nibble to 1
    printf("Enter the num ");
    scanf("%u",&num);
    num=num|(0x0f<<28);
    printf("%u ",num);
    //Set n bits to 1 (user input)Set n bits to 1 (user input)
    int n,start,k;
     printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    printf("Enter the start bit ");
    scanf("%u",&start);
    k=pow(2,(n));
    num=num|((k-1)<<start);
    printf("%u ",num);
    //Clear n bits (set to 0), with n as input
     printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    printf("Enter the start bit ");
    scanf("%u",&start);
    k=pow(2,(n));
    num=num&~((k-1)<<start);
    printf("%u ",num);
    //Toggle n bits (user input)
       printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    printf("Enter the start bit ");
    scanf("%u",&start);
    num=num^((k-1)<<start);
    printf("%u ",num);
    
    
}