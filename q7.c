//Q7: Write a program to swap two numbers without using a third variable.


#include <stdio.h>

int main() {
   int x,y;
    printf("enter a no. here: ");
    scanf("%d",&x);
    printf("enter another no. here: ");
    scanf("%d",&y);
    printf("before swaping %d and %d\n",x,y);
    x= x+y;
    y=x-y;
    x=x-y;
    printf("after swaping %d and %d \n",x,y);

    return 0;
}