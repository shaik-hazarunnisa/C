/******************************************************************************
6.Character Pointer and String Handling

Goal:

Manipulate strings using character pointers and standard string library 
functions.

Activity:

1. Declare a character pointer and assign it to a string literal or dynamically 
allocated memory.
2. Use pointer arithmetic to traverse and modify the string.
3. Implement functions to concatenate, copy, or reverse strings using only 
pointers.
4. Understand how strings are stored and accessed in memory via pointers.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
void my_strcpy(char *dest, char *src) {
    while(*src!='\0') {
        *dest=*src;
        dest++;
        src++;
    }
    *dest='\0';
}
void my_strcat(char *dest,char *src) {
    while(*dest!='\0') {
        dest++;
    }
    while(*src!='\0') {
        *dest= *src;
        dest++;
        src++;
    }
    *dest='\0';
}
void reverse(char*str) {
    char*start=str;
    char*end=str;
    while(*end!='\0') {
        end++;
    }
    end--;
    while(start<end) {
        char temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}
int main() {
    char*str1="Hello";
    char*str2=(char*)malloc(50*sizeof(char));
    char*str3=(char*)malloc(50*sizeof(char));
    if(str2==NULL||str3==NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    my_strcpy(str2, str1);
    printf("Copied string: %s\n",str2);
    my_strcat(str2, " World");
    printf("Concatenated string: %s\n",str2);
    reverse(str2);
    printf("Reversed string: %s\n",str2);
    printf("Character by character:\n");
    char *ptr=str2;
    while(*ptr!='\0') {
        printf("%c ",*ptr);
        ptr++;
    }
    printf("\n");
    free(str2);
    free(str3);
    return 0;
}