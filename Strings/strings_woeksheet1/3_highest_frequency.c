/******************************************************************************
3. Program: Find highest frequency character in a string
          Input: "engineering"

          Output: 'e' appears 3 times

*******************************************************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{
    char str[100];   
    char ch;
    int i=0,j,l1,cnt=0,cnt1=0;
    printf("Enter the string:");
    fgets(str,100,stdin);
    
    while(str[i]!='\n')
    {
        i++;
    }
    str[i]='\0';
    l1=strlen(str);
    for(i=0;i<l1;i++)
    {
        cnt=0;
        for(j=(i+1);j<l1;j++)
        {
            if(str[i]==str[j])
            {
                cnt++;
            }
        }
        if(cnt1<cnt)
        {
            ch=str[i];
            cnt1=cnt;
        }
    }
    printf("%c appears %d times",ch,(cnt1+1));
    
   
}