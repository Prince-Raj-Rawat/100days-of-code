//7Q8: Write a program to find and display the sum of the first n natural numbers.

#include <stdio.h>

int main() {
   int x;
   printf("enter a natural number : ");
   scanf("%d", &x);
   printf("the sum of the first %d natural number is : %d",x,(x*(x+1))/2);
   return 0;
}