//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.


#include <stdio.h>
int main() {
int a;

printf("input a integer: ");
scanf("%d",&a);
if (a<0)
{printf("negative");}
else if (a==0)
{printf("zero");}
else
printf("positive");
return 0;

}