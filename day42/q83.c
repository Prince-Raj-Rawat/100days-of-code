//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include <stdio.h>
#include<string.h>
int main(){
    int i=0, vowels=0, consonants=0;
    char s[200];

    printf("Enter the string: ");
    fgets(s,200,stdin);
    s[strcspn(s, "\n")]='\0';

    while(s[i]!='\0'){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        vowels++;
        else
        consonants++;
        i++;
    }

    printf("The nmumber of vowels and consonants in the string is %d and %d", vowels, consonants);

    




}