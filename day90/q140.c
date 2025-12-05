//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>

// Define the enum
enum Gender { MALE, FEMALE, OTHER };

// Define the struct
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    struct Person p;

    // Simulate input
    p.gender = MALE;

    // Print gender
    printf("Gender: ");
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}