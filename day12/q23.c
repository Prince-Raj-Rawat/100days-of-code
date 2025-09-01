//Q23: Write a program to calculate a library fine based on late days.

#include <stdio.h>
int main() {
int x,y;
printf("enter the no of days late returned: ");
scanf("%d",&x);
if (x>=1 && x<=7)
{y=2*x;
printf("fine rs %d",y);}
else if (x>7 && x<=14)
{y=4*x;
printf("fine rs %d",y);}
else if(x>14 && x <=30)
{y=6*x;
printf("fine rs %d",y);}
else if (x>30)
printf("Membership cancelled.");
else if (x==0)
printf("0 fine");
else
printf("enter a valid value.");
return 0;
}