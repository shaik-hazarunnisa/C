/*****************************************************************************
        13. Passing Function Pointers to Standard Algorithms
        ◦ Define a structure representing a record (e.g., struct Person { char name[30]; int age; }).
        ◦ Implement multiple comparison functions for sorting (e.g., by name, by age).
        ◦ Use the C standard library function qsort, passing these comparison functions as function pointers to sort an array of records in different ways.
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char name[30];
    int age;
};

int cmpByName(const void *a,const void *b)
{
    return strcmp(((struct Person*)a)->name,((struct Person*)b)->name);
}

int cmpByAge(const void *a,const void *b)
{
    return ((struct Person*)a)->age-((struct Person*)b)->age;
}

int main()
{
    struct Person p[5]={
        {"Haseena",25}, {"Hazzu",22},{"Nazeer",30},{"Neeshu",20},{"Neha",27}};
    int n=5,i,ch;

    scanf("%d",&ch);

    if(ch==1)
        qsort(p,n,sizeof(struct Person),cmpByName);
    else if(ch==2)
        qsort(p,n,sizeof(struct Person),cmpByAge);
    else
    {
        printf("Invalid\n");
        return 0;
    }

    for(i=0;i<n;i++)
        printf("%s %d\n",p[i].name,p[i].age);

    return 0;
}