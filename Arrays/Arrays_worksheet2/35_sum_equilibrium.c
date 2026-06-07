/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]),total= 0;
    for(int i = 0; i < n; i++) {
        total+= arr[i];
    }

    int left_sum = 0;
    for(int i = 0; i < n; i++) {
        total-= arr[i];
        if(left_sum == total) {
            printf("Equilibrium index is %d\n", i);
            return 0;
        }
        left_sum += arr[i];
    }
printf("No equilibrium index found\n");

    return 0;
}