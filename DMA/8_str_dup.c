/******************************************************************************
Exercise 7: Dynamic String Input
Goal:Handle strings with dynamic memory allocation.
Activity:
    • Ask the user to enter a string.
    • Find its length using strlen.
    • Allocate memory to store the string using malloc.
    • Copy the string to the new memory.
    • Print the copied string.
    • Free the memory.


*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *dup_str(char *s,int size)
{
    int i=0;
    char *copy;
    copy=malloc((size+1)*sizeof(char));
    if(copy==NULL)
    {
        
        printf("Memory allocation failed\n");
        return NULL;
    }
    for(i=0;i<=size;i++)
    {
       copy[i]=s[i];
    }
    return copy;
}

int main()
{
  char str[20],*dup;
  int len;
  printf("Enter a string:");
  scanf("%s",str);
  len=strlen(str);
  dup=dup_str(str,len);
   if (dup==NULL)
    {
        printf("Memory allocation failed\n");
        return 0;
    }

  printf("%s",dup);
  free(dup);
}
   