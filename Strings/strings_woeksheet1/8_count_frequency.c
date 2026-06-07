/*******************************
8. Program: Count frequency of each character in a string
         Input: "success"
         Output:
          s = 3
         u = 1
         c = 2
         e = 1

***********************************************/

#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int main()
{
    char str[100];   
    char ch;
    int i=0,j,l1,cnt;
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
       for(j=0;j<l1;j++)
       {
           if((str[i]==str[j]))
           {
               if(j<i)
               {
                   break;
               }
               else
               cnt++;
           }
           
       }
       if(cnt>0)
       {
       printf("%c=%d\n",str[i],cnt);
       }
    }
  
}