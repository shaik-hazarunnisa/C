/******************************************************************************
Unions in Structures
Log Session a structure Student with a union inside it that can hold either an int roll_number or a char id[10].
Add a member char type to indicate which member is active.
Write functions to initialize and display the data for both types of students.
*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct student
{
   char type;

    union Data
    {
      int rollno;
      char id[20];
    }d;
};

void set_data(struct student *s)
{
    if(s->type=='r')
    {
    s->d.rollno=10;
    printf("rollno is %d\n",s->d.rollno);
    }
    if(s->type=='i')
    {
    strcpy(s->d.id,"sfggv34");
    printf("id is %s",s->d.id);
    }
}
int main()
{
    struct student s1,s2;
    s1.type='r';
    s2.type='i';
    set_data(&s1);
    set_data(&s2);
    
    
}