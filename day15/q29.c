//Q29: Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/


#include <stdio.h>

int factorial_of_number(int u){
    int x,y=1;
    for(x=1;x<=u;x++)
    {
        y*=(x);
    }
    return (y);
}

int main (){
int i;
printf("enter a number: ");
scanf("%d",&i);
int fact = factorial_of_number(i);
printf("factorial is %d\n",fact);
return 0;

}