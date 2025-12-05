//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include <stdio.h>

// Define the enum
enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    // Print enum constants with their integer values
    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", SUCCESS, FAILURE, TIMEOUT);
    return 0;
}