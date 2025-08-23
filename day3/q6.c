//Q6: Write a program to swap two numbers using a third variable.


#include <stdio.h>
int main() {
    int x,y,z;
    printf("enter a no. here: ");
    scanf("%d",&x);
    printf("enter another no. here: ");
    scanf("%d",&y);
    printf("before swaping %d %d\n",x,y);
    z=y;
    y=x,x=z;
    printf("after swaping %d %d \n",x,y);
}