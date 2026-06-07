/******************************************************************************
Goal:Store each word of a sentence in dynamically allocated memory.
Activity:
    • Accept a sentence as input.
    • Use strtok() to split it into words.
    • Use malloc to copy each token into a new memory block.
    • Store them in a pointer array.
    • Print all words and free each block.


*****************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
  char str[100],*word[50];
  int len,cnt=0,i;
  char *p;
  printf("Enter a string:");
  scanf("%[^\n]",str);
  
     p=strtok(str," ");
    while(p!=NULL)
    {
        len=strlen(p);
        word[cnt]=malloc((len+1)*sizeof(char));
        strcpy(word[cnt++],p);
        p=strtok(NULL," ");
    }
   for(i=0;i<cnt;i++)
   {
       printf("%s\n",word[i]);
   }
  
}
   