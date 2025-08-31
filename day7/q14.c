//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.


#include <stdio.h>
int main() {
    char a ;
    printf("enter a character: ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='e'||a=='o'||a=='u')
    printf("it is a vowel");
    else
    printf("it is a consonant");
    return 0;



}