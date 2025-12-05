//Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>

// Define enum with explicit starting value
enum Letters { A = 10, B, C };

int main() {
    // Print each enum constant with its value
    printf("A=%d\n", A);
    printf("B=%d\n", B);
    printf("C=%d\n", C);

    return 0;
}