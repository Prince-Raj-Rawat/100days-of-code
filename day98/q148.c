/*Q148: Take two structs as input and check if they are identical.


Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s1, s2;
    int identical = 1;

    printf("Enter details for Student 1:\n");
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Roll number: ");
    scanf("%d", &s1.roll_no);
    printf("Marks: ");
    scanf("%d", &s1.marks);

    printf("Enter details for Student 2:\n");
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Roll number: ");
    scanf("%d", &s2.roll_no);
    printf("Marks: ");
    scanf("%d", &s2.marks);

    if (s1.roll_no != s2.roll_no || s1.marks != s2.marks || strcmp(s1.name, s2.name) != 0) {
        identical = 0;
    }

    if (identical) {
        printf("Same");
    } else {
        printf("Not Same");
    }

    return 0;
}