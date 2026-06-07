/************************************
Generic Find Function
Implement a generic function find that takes an integer array, its size, and a function pointer as a condition.
Log Session condition functions (e.g., isEven, isPositive, isPrime).
Use find to identify and print the first element matching the provided condition.
*************************************************** */
#include <stdio.h>

int isEven(int x) {
    return x % 2 == 0;
}

int isPositive(int x) {
    return x > 0;
}

int isPrime(int x) {
    if(x <= 1) return 0;
    for(int i = 2; i * i <= x; i++) {
        if(x % i == 0)
            return 0;
    }
    return 1;
}

int find(int arr[], int n, int (*condition)(int)) {
    for(int i = 0; i < n; i++) {
        if(condition(arr[i])) {
            return arr[i];  
        }
    }
    return -1; 
}

int main() {
    int arr[] = {3,-2,7,8,11};
    int n = 5, choice, result;

    printf("choose condition:\n");
    printf("1. Even\n2. Positive\n3. Prime\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            result = find(arr, n, isEven);
            break;
        case 2:
            result = find(arr, n, isPositive);
            break;
        case 3:
            result = find(arr, n, isPrime);
            break;
        default:
            printf("Invalid choice\n");
            return 0;
    }

    if(result !=-1)
        printf("First matching element: %d\n", result);
    else
        printf("No matching element found\n");

    return 0;
}