/******************************************************************************
    10. Use Case – Variant Data Storage
Design a simple employee record system using a structure with a union that can store either salary (float) or hourly wage (float), depending on employee type.
Add code to input and print details for a list of employees.
*****************************************************************************/
#include <stdio.h>
#include<string.h>
typedef struct employee
{
   char type;

    union Data
    {
      int salary;
      int hourly_wage;
    }d;
}Emp;

void set_data(Emp *p)
{
    int i;
    for(i=0;i<3;i++)
    {
    if(p[i].type=='o')
    {
    p[i].d.salary=100000;
    printf("salary of s%d is %d\n",i,p[i].d.salary);
    }
    if(p[i].type=='l')
    {
   p[i].d.hourly_wage=2000;
    printf("hourly wage of s%d is %d\n",i,p[i].d.hourly_wage);
    }
    }
}
int main()
{
    Emp s[3];
    s[0].type='o';
    s[1].type='l';
    s[2].type='o';
    set_data(s);
}   
    