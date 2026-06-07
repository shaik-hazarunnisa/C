/************************************
Sorting Algorithms Selector
Implement three sorting functions (bubbleSort, selectionSort, insertionSort) that sort an integer array.
Store pointers to these sorting functions in an array of function pointers.
Prompt the user to choose a sorting method, and use the selected function pointer to sort a user-provided integer array.
*************************************************** */
 #include <stdio.h>

void bublesort(int *p,int size)
{
    int i,j,temp;
    for(i=0;i<(size-1);i++)
    {
        for(j=0;j<(size-i-1);j++)
        {
             if(p[j]>p[j+1])
             {
                 temp=p[j];
                 p[j]=p[j+1];
                 p[j+1]=temp;
             }
        }
    }
}

void insertionSort(int *p,int  size)
{
    int key,i,j;
    for(i=1;i<size;i++)
    {
        key=p[i];
        j=i-1;
        while(j>=0&&(p[j]>key))
        {
            p[j+1]=p[j];
            j--;
        }
        p[j+1]=key;
    }
}

void selection_sort(int *p,int size)
{
    int min,i,j,temp;
    for(i=0;i<(size-1);i++)
    {
        min=i;
        for(j=(i+1);j<size;j++)
        {
            if(p[j]<p[min])
            {
                min=j;
            }
        }
        temp=p[i];
        p[i]=p[min];
        p[min]=temp;
    }
}
int main()
{
    int choice,i,j,n;
    int arr[100];
    printf("Enter the no of elements:");
    scanf("%d",&n);
    
     printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    void (*sort_array[3])(int[],int)={bublesort,insertionSort,selection_sort};
   
   printf("Enter the sorting choice:\n");
   printf(" 1 .Bubble sort\n 2.Insertion sort\n 3.Selection sort\n");
   scanf("%d",&choice);
   
   sort_array[(choice-1)](arr,n);
   for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    
   
    
}