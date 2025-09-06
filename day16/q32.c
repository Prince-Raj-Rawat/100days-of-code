//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/

#include <stdio.h>

int palindrom(int a);

int main(){
    int x,y;
    printf("enter a no.: ");
    scanf("%d",&x);
    y= palindrom(x);
    printf("%d\n",y);
    if (x==y)
        printf("it is  a palindrome no.\n");
    else 
        printf("it is not a palindrome no.\n");
    return 0;

}

int palindrom(int a){
    int b,c=0,d;
    while (a>0)
       { b=(a%10);
        c=((c*10)+b);
        a=a/10;}
return c;
}