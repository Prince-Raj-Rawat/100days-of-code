//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/
#include <stdio.h>

// Define the enum
enum Status { SUCCESS, FAILURE, TIMEOUT };

int main() {
    enum Status result;

    // Simulate input: set result to FAILURE
    result = FAILURE;

    // Print message based on status
    switch (result) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
    }

    return 0;
}