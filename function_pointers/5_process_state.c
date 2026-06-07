/************************************
State Machine Implementation
Implement a basic state machine (initState, runState, stopState, errorState) with each state represented by a separate function.
Use function pointers to transition between states based on user input or internal conditions.
Demonstrate state transitions clearly in your program’s output.
*************************************************** */
 #include <stdio.h>

void runState();
void stopState();
void initState();
void errorState();

void (*currentState)();
void initState() {
    int choice;
    printf("1. Start Running\n2. Error");
    scanf("%d", &choice);

    if(choice==1)
        currentState=runState;
    else
        currentState=errorState;
}

void runState() {
    int choice;
    printf("1. Stop\n2. Error\n: ");
    scanf("%d",&choice);

    if(choice == 1)
        currentState = stopState;
    else
        currentState = errorState;
}

void stopState() {
    int choice;
    printf("1. Restart\n2. Exit: ");
    scanf("%d", &choice);

    if(choice==1)
        currentState =initState;
    else
        currentState =NULL; 
}

void errorState() {
    int choice;
    printf("1. Reset\n2. Exit: ");
    scanf("%d", &choice);

    if(choice == 1)
        currentState =initState;
    else
        currentState =NULL;
}

int main() {
    currentState =initState; 

    while(currentState!=NULL) {
        currentState(); 
    }
    printf("\nState machine terminated.\n");
    return 0;
}
