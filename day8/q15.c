//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.






#include <stdio.h>
int main() {
    char a;
    printf("enter a character: ");
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
    printf("it is a uppercase alphabet");
    else if (a>='a'&& a<='z')
    printf("it is a lowercase alphabet");
    else if(a>=0&&a<=9)
    printf("it is a digit");
    else
    printf("it is a special character");
    return 0;

}
