/*
3. Check whether a number can be expressed as the sum of two prime numbers
 
Question: Write a program to check if a number can be expressed as the sum of two prime numbers using functions.
Sample data: Input: 34
Expected output: 34 = 3 + 31
*/

#include<stdio.h>
int prime(int);

int main()
{
    int n,x=1,y,sum;
    printf("Enter the num");
    scanf("%d",&n);
    y=n;
    while(x<y)
    {
    if(prime(x))
    {
        if(prime(y))
        {
        sum=x+y;
        if(sum==n)
        {
        printf("%d=%d+%d",n,x,y);
        break;
        }
        y--;
        }
        else
            y--;
        x++;
    }
    else
        x++;
    }
    
}


int prime(int x)
{
    int i,j,cnt=0;
    
        for(j=2;j<x;j++)
        {
            if(i%j==0)
                cnt++;
        }
        if(cnt==0)
           return 1;
    return 0;
}