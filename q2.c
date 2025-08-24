//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.


#include <stdio.h>
int main() {
    int a, b ;
    printf("Enter a number: ");
    scanf("%d", &a); 
    printf("Enter another number: ");
    scanf("%d", &b);
    
    printf("The product of %d and %d is %d\n", a, b,a*b);
         
    printf("The difference of %d and %d is %d\n", a, b,a-b );
    
    printf("The quotient of %d and %d is %.2f\n", a, b,(float)a/b);
    
    printf("The sum of %d and %d is %d\n", a, b,a+b );
  


    return 0;
    
}

