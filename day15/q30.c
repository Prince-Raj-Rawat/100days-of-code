//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>

void reverse_a_number(int i){
    int x;
    while(1)
    {if ( i != 0) 
        printf("%d",(i%10));
    else
    break;
    i=i/10;
    }

}

int main() {
    int y;
    printf("enter a number: ");
    scanf("%d",&y);
    reverse_a_number(y);
    return 0;

}