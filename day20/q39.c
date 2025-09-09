//Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>

int main()

{
    int num, i, mul;

    mul=1;

    printf("Enter the number: ");
    scanf("%d", &num);

    for(num;num!=0;num=num/10){
        if(num%2!=0){
            mul=mul*(num%10);
        }
        
    }

    printf("The multiplication of odd digits of number is %d", mul);
    
    return 0;

}