/************************************
Menu-driven Calculator Using Function Pointers
Implement mathematical operations (power, modulo, squareRoot) as separate functions.
Store these operation functions in a function pointer array.
*************************************************** */
 #include <stdio.h>
 #include <math.h>
 
int power(int x,int y)
{
  return pow(x,y);
}

int modulo(int x,int y)
{
    return x%y;
}

int squareRoot(int x,int y)
{
    return sqrt(x);
}

int main()
{
    int i,choice,x=6,y=2;
    
    int (*Operation[3])(int,int)={power,modulo,squareRoot};
   
   printf("Enter the sorting choice:\n");
   printf(" 1 .Power\n 2.Modulo\n 3.squareRoot sort\n");
   scanf("%d",&choice);
  
  switch(choice)
  {
      case 1 : i=Operation[choice-1](x,y);
               break;
      case 2 : i=Operation[choice-1](x,y);
               break;
      case 3 : i=Operation[choice-1](x,0);
               break;
  }
  printf("Answer : %d",i);
    
}