//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.



#include <stdio.h>
int main() {
    int sec , m,h,s;
printf("enter the seconds: ");
scanf("%d",&sec);
m=(sec%3600)/60;
h=(sec/3600);
s=(sec%3600)%60;
printf("the time is %d:%d:%d",h,m,s);
return 0;
  
}