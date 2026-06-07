/******************************************************************************
Exercise 17: Struct Array with Dynamic Allocation
Goal: Allocate memory for array of structs.
Activity:
    • Define a struct (e.g., name and age).
    • Ask user how many entries to store.
    • Allocate memory using malloc.
    • Accept values and display them.
    • Free the memory.


*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

struct person
{
    char name[50];
    int age;
};

int main()
{
    struct person *ptr;
    int n, i;
    printf("Enter number of persons: ");
    scanf("%d", &n);
    ptr = (struct person*)malloc(n * sizeof(struct person));

    if(ptr==NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }
    for(i=0;i<n;i++)
    {
        printf("enter details of person %d\n", i + 1);
       printf("Name: ");
        scanf("%s", ptr[i].name);

        printf("Age: ");
        scanf("%d", &ptr[i].age);
    }
    for(i = 0; i < n; i++)
    {
        printf("Person %d: Name=%s,Age = %d\n",
               i + 1, ptr[i].name, ptr[i].age);
    }
    free(ptr);

    return 0;
}