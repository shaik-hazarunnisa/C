/*******************************
1. Display all prime numbers between two intervals
Question: Write a program to display all prime numbers between two given intervals using functions.
Sample data: Interval: 10 to 30
Expected output: 11 13 17 19 23 29
***********************************************/

#include <stdio.h>
void prime(int,int);

int main()
{
    int min,max;
    printf("Enter the range:");
    scanf("%d",&min);
    scanf("%d",&max);
    prime(min,max);
}

void prime(int x,int y)
{
    int i,j,cnt=0;
    for(i=x;i<=y;i++)
    {
        cnt=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                cnt++;
        }
        if(cnt==0)
           printf("%d ",i);
    }
}