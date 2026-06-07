/************************************
EInterrupt Handler Simulation
Log Session several interrupt handler functions (e.g., timerInterrupt, keyboardInterrupt, errorInterrupt).
Map these interrupt handlers using an array of function pointers.
Simulate interrupts by invoking appropriate interrupt handlers using their pointers based on interrupt numbers entered by the user.
*************************************************** */
 #include <stdio.h>

// Interrupt Handlers
void timerInterrupt() {
    printf("Timer Interrupt - Updating system time\n");
}

void keyboardInterrupt() {
    printf("Keyboard Interrupt - Reading key input\n");
}

void errorInterrupt() {
    printf("Error Interrupt - Handling system error\n");
}


int main() {
    int choice;
    void (*interruptTable[3])() = {timerInterrupt,keyboardInterrupt,errorInterrupt};
     printf("Interrupt Simulation System\n");
    printf("0. Timer Interrupt\n");
    printf("1. Keyboard Interrupt\n");
    printf("2. Error Interrupt\n");
    printf("Enter interrupt number: ");
    scanf("%d", &choice);

    if(choice>=0&&choice<3) {
        printf("\nHandling Interrupt:\n");
        interruptTable[choice](); 
    } 
    printf("Invalid Input");
    return 0;
}