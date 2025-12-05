/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    FILE *file;

    printf("Enter employee name: ");
    scanf("%s", emp.name);
    printf("Enter employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter employee salary: ");
    scanf("%f", &emp.salary);

    file = fopen("employee.txt", "w");
    if (file==NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fwrite(&emp, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("Employee data written to file successfully.\n");

    struct Employee read;
    file = fopen("employee.txt", "r");
    if (file==NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    fread(&read, sizeof(struct Employee), 1, file);
    fclose(file);
    printf("\nEmployee data read from file:\n");
    printf("Name: %s | ID: %d | Salary: %.2f\n",read.name,read.id,read.salary);

    return 0;
}