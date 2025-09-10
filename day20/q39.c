//Q39: Write a program to find the product of odd digits of a number.


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