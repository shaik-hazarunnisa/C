/*
4. Find the sum of natural numbers using recursion
Question: Write a recursive function to find the sum of natural numbers up to n.
Sample data: Input: 10
Expected output: Sum of natural numbers up to 10 is 55
*/

#include<stdio.h>
int sum(int,int);

int main()
{
    int n,x=1,s;
    printf("Enter the range");
    scanf("%d",&n);
    s=sum(x,n);
    printf("%d",s);
}

int sum(int x,int n)
{
    if(x>n)
    {
        return 0;
    }
    else
    return (x+sum((x+1),n));
}