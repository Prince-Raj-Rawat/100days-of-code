//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/
#include <stdio.h>
#include <string.h>

// Define the enum
enum Operation { ADD, SUBTRACT, MULTIPLY };

int main() {
    char choice[20];
    int a, b;
    enum Operation op;

    // Get user input
    printf("Enter operation (ADD, SUBTRACT, MULTIPLY) followed by two integers:\n");
    scanf("%s %d %d", choice, &a, &b);

    // Map string to enum
    if (strcmp(choice, "ADD") == 0) {
        op = ADD;
    } else if (strcmp(choice, "SUBTRACT") == 0) {
        op = SUBTRACT;
    } else if (strcmp(choice, "MULTIPLY") == 0) {
        op = MULTIPLY;
    } else {
        printf("Invalid operation\n");
        return 1;
    }

    // Perform operation
    switch (op) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
    }

    return 0;
}