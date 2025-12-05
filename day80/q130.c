//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include <stdio.h>

int main() {
    FILE *file;
    int i, numStudents;
    char name[50];
    int roll;
    float marks;

    // Open file in write mode
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Cannot create file.\n");
        return 1;
    }

    // Input number of students
    printf("Enter number of students: ");
    scanf("%d", &numStudents);

    // Store student records
    for (i = 0; i < numStudents; i++) {
        printf("Enter name, roll number, and marks for student %d:\n", i + 1);
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(file, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(file);

    // Open file in read mode
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    while (fscanf(file, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %.0f\n", name, roll, marks);
    }

    fclose(file);
    return 0;
}