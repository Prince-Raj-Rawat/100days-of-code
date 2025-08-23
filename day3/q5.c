// Q5. write a program to convert celsius to farenheit.

#include <stdio.h>
int main() {
float cels, faren;
printf("enter the temperature in celsius: ");
scanf("%f",&cels);
faren =( cels*9/5)+32;
printf("%.2f celsius is equal to %.2f farenheit.",cels ,faren);
return 0;
}