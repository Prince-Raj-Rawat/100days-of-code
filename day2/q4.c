//Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

int main() {
float r , a, c;
printf("enter the radius of the circle: ");
scanf("%f",&r);
a= 3.14*r*r;
c= 3.14*2*r;
printf("the area of the circle is %.2f\n",a);
printf("the circumference of the circle is %.2f\n",c);
return 0;
}