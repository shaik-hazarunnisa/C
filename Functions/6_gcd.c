/*
6. Find G.C.D using recursion
 
Question: Write a recursive function to find the GCD of two numbers.
Sample data: Input: 56 and 98
Expected output: GCD of 56 and 98 is 14
*/

#include<stdio.h>
int prime(int);
int gcd(int x,int y)
{
    int divi;
    divi=(x%y);
    if(divi==0)
      return y;
     else
       return gcd(y,divi);
}
int main()
{
    int x,y,GCD;
    printf("Enter the x and y values");
    scanf("%d %d",&x,&y);
    if(x>y)
    {
       GCD=gcd(x,y);
    }
    else
       GCD=gcd(y,x);
    printf("%d",GCD);
}

