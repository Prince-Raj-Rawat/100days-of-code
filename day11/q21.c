//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include <stdio.h>
int main () {
int a,b;
while(1){
    printf("enter the year: ");
    scanf("%d",&b);
int c = ((b%4==0 && b%100!=0) || (b%400==0))?1:0;
    printf("enter the month number: ");
scanf("%d",&a);
    if(a>0 && a<13){
switch(a){
    case 1:printf("january, 31 days\n"); break;
    case 2:{
        if (c==1)
        {printf("february, 29 days\n"); break;}
        else if (c == 0) 
        printf("february, 28 days\n"); break;}
    case 3:printf("march, 31 days\n"); break;
    case 4:printf("april, 30 days\n"); break;
    case 5:printf("may, 31 days\n"); break;
    case 6:printf("june, 30 days\n"); break;
    case 7:printf("july, 31 days\n"); break;
    case 8:printf("august, 31 days\n"); break;
    case 9:printf("september, 30 days\n"); break;
    case 10:printf("october, 31 days\n"); break;
    case 11:printf("november, 30 days\n"); break;
    case 12:printf("december, 31 days\n"); break;}
break;}
else 
printf("invalid no. please try again:\n");
}
return 0;

}