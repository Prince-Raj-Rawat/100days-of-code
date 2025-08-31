//Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include <stdio.h>
int main () {

float  a ,b, c ;
printf("enter the cost price : ");
scanf("%f",&a);
printf("enter the selling price :");
scanf("%f",&b);
if (b>a)
{c= (float)((b-a)/a)*100;
    printf("you made a profit of %.2f%%\n",c);
}
else if (b<a)
{c= (float)((a-b)/a)*100;
    printf("you made a loss of %.2f %%\n",c);
}

return 0;
}