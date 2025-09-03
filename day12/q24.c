//Q24: Write a program to calculate an electricity bill based on units consumed.

#include <stdio.h>
int main() {
int x,y;
printf("enter you electricity bill: ");
scanf("%d",&x);
if (x>=1 && x<=100)
{y= (5*x);
printf("bill rs %d",y);}
else if (x>100 && x<=200)
{y=(5*100)+9*(x-100);
printf("bill rs %d",y);}
else if(x>200)
{y=(5*100)+(9*100)+16*(x-200);
printf("bill rs %d",y);}
else if (x==0)
printf("0 bill");
else 
printf("entered a valid value.");
return 0;
}