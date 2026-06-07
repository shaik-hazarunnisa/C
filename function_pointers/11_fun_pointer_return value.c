/*****************************************************************************
    11. Function Pointer as Return Value
        ◦ Implement multiple arithmetic functions (add,subtract, multiply).
        ◦ Write a function getOperation(char *name) that takes a string (like "add" or "subtract") and returns a pointer to the corresponding function.
        ◦ Use this return value to perform the selected operation on user-provided numbers.
*******************************************************************************/
#include <stdio.h>
#include <string.h>
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}
int (*getOperation(char *name))(int, int) {
    if (strcmp(name, "add") == 0)
        return add;
    else if (strcmp(name, "subtract") == 0)
        return subtract;
    else if (strcmp(name, "multiply") == 0)
        return multiply;
    else
        return NULL;
}

int main() {
    char operation[20];
    int x, y;

    printf("Enter operation (add, subtract, multiply): ");
    scanf("%s", operation);

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int (*opFunc)(int, int) = getOperation(operation);

    if (opFunc != NULL) {
        int result = opFunc(x, y);
        printf("Result = %d\n", result);
    } else {
        printf("Invalid operation\n");
    }

    return 0;
}