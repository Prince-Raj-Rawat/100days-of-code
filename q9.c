//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.


#include <stdio.h>
#include <math.h>
int main() {
float rate, principle , time,si,ci;
printf("enter principle amount: ");
scanf("%f",&principle);
printf ("enter rate of intreset :");
scanf("%f",&rate);
printf("enter time period: ");
scanf("%f",&time);
si=(principle*rate*time)/100;
ci=(principle*pow((1+rate/100),time))-principle;
printf("the simple interst is : %f\n",si);
printf("the compounded interest is : %f\n",ci);

return 0;


}