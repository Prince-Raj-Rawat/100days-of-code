//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
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