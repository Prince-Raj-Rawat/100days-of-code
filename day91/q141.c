//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;

    // Read student data
    printf("Enter student name: ");
    scanf("%s", s.name);

    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    // Print student data
    printf("Name: %s | Roll: %d | Marks: %.0f\n", s.name, s.roll_no, s.marks);

    return 0;
}