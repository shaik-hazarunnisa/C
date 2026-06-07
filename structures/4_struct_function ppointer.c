/******************************************************************************
. Function Pointers in Structures
Goal
Learn how to include and use function pointers inside structures for callback mechanisms and dynamic behavior in embedded systems.

Activity
Define a structure containing function pointers.
Initialize it with different functions and invoke them.
Use this setup to simulate a hardware driver interface with different behavior implementations.
Demonstrate dynamic assignment and execution of function pointers based on a condition or input.
Tip: Use typedef for cleaner function pointer declarations.


*******************************************************************************/
#include <stdio.h>

typedef void (*operation)(void);

struct Device {
    operation init;
    operation read;
    operation write;
};

void sensor_init()  
{ 
    printf("Sensor Initialized\n");
}
void sensor_read()  
{
    printf("Sensor Reading\n"); 

}
void sensor_write() 
    {
    printf("Sensor Write\n"); 
    }
    
int main() {
    struct Device dev;

    dev.init= sensor_init;
    dev.read = sensor_read;
    dev.write = sensor_write;

    dev.init();
    dev.read();
    dev.write();

    return 0;
}