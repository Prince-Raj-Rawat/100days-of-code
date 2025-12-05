//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/
#include <stdio.h>

// Define the enum
enum TrafficLight { RED, YELLOW, GREEN };

int main() {
    enum TrafficLight signal;

    // Simulate input: set the signal to GREEN
    signal = GREEN;

    // Print action based on signal
    switch (signal) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid signal\n");
    }

    return 0;
}