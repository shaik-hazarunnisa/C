/******************************************************************************
        2. Write a program to perform the following operations on the Least and Most Significant Bits (LSB/MSB) of a given integer:
        ◦ Set the LSB to 1
        ◦ Clear the LSB (set to 0)
        ◦ Toggle the LSB
        ◦ Set the MSB to 1
        ◦ Clear the MSB (set to 0)
        ◦ Toggle the MSB
        ◦ Set a specific bit to 1
        ◦ Clear a specific bit
        ◦ Toggle a specific bit

*******************************************************************************/
#include <stdio.h>
#include<math.h>
int main()
{
    unsigned int num;
    printf("Enter the num ");
    scanf("%u",&num);
    //set the LSB to 1
    num=num|1;
    printf("%u \n",num);
    //◦Clear the LSB (set to 0)
    printf("Enter the num ");
    scanf("%u",&num);
    num=num&~1;
    printf("%u \n",num);
    //Toggle the LSB
    printf("Enter the num ");
    scanf("%u",&num);
    num=num^1;
    printf("%u \n",num);
    //Set the MSB to 1
    printf("Enter the num ");
    scanf("%u",&num);
    num=num|(1<<30);
    printf("%u \n",num);
    //clear the MSB (set to 0)
    printf("Enter the num ");
    scanf("%u",&num);
    num=num&~(1<<30);
    printf("%u \n",num);
    //Toggle the MSB
     printf("Enter the num ");
    scanf("%u",&num);
    num=num^(1<<30);
    printf("%u \n",num);
    //Set a specific bit to 1
    int n;
     printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    num=num|(1<<n);
    printf("%u \n",num);
    //Clear a specific bit
     printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    num=num&~(1<<n);
   printf("%u \n",num);
    //Toggle a specific bit
    printf("Enter the num ");
    scanf("%u",&num);
    printf("Enter the n bits ");
    scanf("%u",&n);
    num=num^(1<<n);
    printf("%u ",num);
    
}