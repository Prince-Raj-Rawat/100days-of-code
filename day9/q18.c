//Q18: Write a program to assign grades based on a percentage input.

#include <stdio.h>

int main() {
    int m1, m2, m3, m4;
    int total;
    float average;

    
    printf("Enter marks for Subject 1: ");
    scanf("%d", &m1);
    printf("Enter marks for Subject 2: ");
    scanf("%d", &m2);
    printf("Enter marks for Subject 3: ");
    scanf("%d", &m3);
    printf("Enter marks for Subject 4: ");
    scanf("%d", &m4);

    
    total = m1 + m2 + m3 + m4;
    average = total / 4.0;

    
    if (average >= 90) {
        printf("Grade A\n");
    } else if (average >= 80) {
        printf("Grade B\n");
    } else if (average >= 70) {
        printf("Grade C\n");
    } else if (average >= 60) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}