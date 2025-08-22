//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


#include <stdio.h>
int main() {
    int a, b, product,sum, difference, quotient;
    printf("Enter a number: ");
    scanf("%d", &a); 
    printf("Enter another number: ");
    scanf("%d", &b);
    product = a * b;
    printf("The product of %d and %d is %d\n", a, b, product);
        difference = a - b; 
    printf("The difference of %d and %d is %d\n", a, b, difference);
    quotient = a / b;
    printf("The quotient of %d and %d is %d\n", a, b, quotient);
    sum = a + b;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    return 0;
}