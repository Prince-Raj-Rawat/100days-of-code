#include <stdio.h>
int main() {
float l , b , peri , area;
printf("enter the lenght of the rectangle:");
scanf("%f", &l);
printf("enter the breadth of the rectangle:");
scanf("%f", &b);
peri = 2 * (l + b);
area = l * b;
printf("perimeter of the rectangle is: %.2f\n", peri);
printf("area of the rectangle is: %.2f\n", area);

return 0;
}