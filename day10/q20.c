//Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

#include <stdio.h>
int main () {int a;
printf("enter a no. between 1 to 7.\n");
printf("for example: 1 if monday \n2 if tuesday \netc etc upto 7.\n");
printf("enter here: ");
scanf("%d",&a);
switch(a){
    case 1:{printf("prince its monday");
    break;}
    case 2:{printf("prince its tuesday");
    break;}
    case 3:{printf("prince its wednesday");
    break;}
    case 4:{printf("prince its thursday");
    break;}
    case 5:{printf("prince its friday");
    break;}
    case 6:{printf("prince its saturday");
    break;}
    case 7:{printf("prince its sunday");
    break;}
    default:
    printf("prince your entered value is not valid");
return 0;
}
}