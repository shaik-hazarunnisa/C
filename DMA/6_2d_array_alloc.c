/******************************************************************************
Goal:Learn how to allocate and access a 2D array dynamically.
Activity:
    • Ask the user for number of rows and columns.
    • Allocate memory for an array of row pointers.
    • Allocate each row separately using malloc.
    • Accept values for each row-column index.
    • Display the matrix.
    • Free each row and then the row pointer array.


*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>
void input(int **p,int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&p[i][j]);
        }
    }
}

void print(int **p,int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int **arr;
    int i=0,j,row,col;
    printf("Enter the rows and col:");
    scanf("%d%d",&row,&col);
    arr=(int**)malloc(row*sizeof(int*));
    if(arr==NULL)
    {
        printf("memory not alocated");
        return 0;
    }
    for(i=0;i<row;i++)
    {
        arr[i]=malloc(col*sizeof(int));
        if(arr==NULL)
        {
            printf("Memory not allocated: ");
            for(j=0;j<i;j++)
            {
                free(arr[j]);
            }
            return 0;
        }
    }
    input(arr,row,col);
    print(arr,row,col);
}
   