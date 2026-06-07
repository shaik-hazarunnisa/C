/******************************************************************************
Exercise 15: Dynamic Menu-Driven Array
Goal: Handle operations on a dynamic array with growing size.
Activity:
    • Start with an empty array.
    • Provide a menu with options: Add element, Display, Exit.
    • Use realloc each time user adds an element.
    • Print array contents.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr=NULL,size=0; 
    int choice,value;

    while(1)
    {
        printf("\1.Add Element 2.Display 3.Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:printf("Enter value: ");
                   scanf("%d", &value);
                   size++;
                   arr=(int*)realloc(arr, size * sizeof(int));
                   if(arr==NULL)
                   {
                    printf("Memory allocation failed!\n");
                    exit(1);
                   }
                   arr[size-1]=value;
                   break;

            case 2:
                if(size == 0)
                {
                    printf("Array is empty\n");
                }
                else
                {
                    printf("Array elements: ");
                    for(int i=0;i<size;i++)
                    {
                        printf("%d ",arr[i]);
                    }
                    printf("\n");
                }
                break;

            case 3:free(arr);   
                exit(0);
        }
    }

    return 0;
}

