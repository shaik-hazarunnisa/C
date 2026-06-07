/******************************************************************************
function pointer
*******************************************************************************/

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}
int subtract(int a, int b) {
    return a - b;
}
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    int x, y, choice;
    int (*operation)(int, int);

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Choose operation:\n");
    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1: operation = add; break;
        case 2: operation = subtract; break;
        case 3: operation = multiply; break;
        case 4: operation = divide; break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }
    int result=operation(x, y);

    printf("Result = %d\n", result);

    return 0;
}