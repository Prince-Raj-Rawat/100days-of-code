/*
Q150: Use pointer to struct to modify and display data using -> operator.

Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    struct Student *ptr = &s;

    printf("Enter name: ");
    scanf("%s", ptr->name);
    printf("Enter roll number: ");
    scanf("%d", &ptr->roll_no);
    printf("Enter marks: ");
    scanf("%d", &ptr->marks);

    printf("Modified Data: Name: %s|Roll Number: %d|Marks: %d\n", ptr->name, ptr->roll_no, ptr->marks);

    return 0;
}