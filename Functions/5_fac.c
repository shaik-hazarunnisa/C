/*
4Question: Write a recursive function to calculate the factorial of a given number.
Sample data: Input: 5
Expected output: Factorial of 5 is 120


*/

#include<stdio.h>
int fac(int);

int main()
{
    int n,f;
    printf("Enter the num");
    scanf("%d",&n);
   f=fac(n);
   printf("Factorial of %d is %d",n,f);
}

int fac(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    return (x*fac(x-1));
}