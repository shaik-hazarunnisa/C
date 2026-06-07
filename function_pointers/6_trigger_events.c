/************************************
Event Handling System
Define events such as buttonPressEvent, sensorTriggerEvent.
Implement handler functions for these events.
Log Session an array of function pointers mapping each event to its corresponding handler function.
Simulate event triggers, calling the appropriate handler through function pointers.
*************************************************** */
 #include <stdio.h>

void buttonPressEvent()
{
    printf("Button pressed - Alarm is on\n");
}

void sensorTriggerEvent()
{
    printf("Sensor Triggered - Temperature will be updated\n");
}

int main()
{
    void (*event[2])() = {buttonPressEvent,sensorTriggerEvent};
    int n;
    printf("Enter the choice\n");
    printf("1.To on alarm\n 2.To update Temperature\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1 : event[n-1]();
                 break;
        case 2 : event[n-1]();
                 break;
    }
}