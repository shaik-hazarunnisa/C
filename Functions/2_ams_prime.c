/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*/
#include <stdio.h>
#include<math.h>
int prime(int);
int Armstrong(int);
int main()
{
    int num,i,j;
    printf("Enter the num");
    scanf("%d",&num);
    i=Armstrong(num);
    j=prime(num);
    if(i==1)
    {
        printf("%d is a Armstrong number",num);
    }
    else
    {
        printf("%d is not a Armstrong number",num);
    }
    if(j==1)
    {
        printf("and prime number");
    }
    else
        printf(" and not a prime number");
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

int Armstrong(int x)
{
    int temp,r,c=0,sum=0;
    temp=x;
    while(temp)
    {
        temp/=10;
        c++;
    }
    temp=x;
    while(temp)
    {
        r=temp%10;
        sum+=pow(r,c);
        temp/=10;
    }
    if(sum==x)
    {
    return 1;
    }
    return 0;
    
}
