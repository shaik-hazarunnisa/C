/************************************
Generic Find Function
Implement a generic function find that takes an integer array, its size, and a function pointer as a condition.
Log Session condition functions (e.g., isEven, isPositive, isPrime).
Use find to identify and print the first element matching the provided condition.
*************************************************** */
#include <stdio.h>

void consoleLog(char msg[]) {
    printf("Console: %s\n", msg);
}

void fileLog(char msg[]) {
    printf("File: %s\n", msg);   
}

void networkLog(char msg[]) {
    printf("Network: %s\n", msg);
}

int main() {
    int choice;
    char msg[50];

    void (*logFunc)(char[]);

    printf("1. Console\n2. File\n3. Network\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    printf("Enter message: ");
    scanf("%s", msg);

    if(choice==1)
        logFunc=consoleLog;
    else if(choice==2)
        logFunc=fileLog;
    else if(choice==3)
        logFunc=networkLog;
    else {
        printf("Invalid choice\n");
        return 0;
    }

    logFunc(msg);

    return 0;
}