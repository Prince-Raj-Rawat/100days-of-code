// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[100];
    printf("enter a string: ");
    fgets(a,100,stdin);
    a[strcspn(a,"\n")]='\0';
    for(int i=0;a[i]!='\0';i++){
        if(isspace(a[i])){ 
        a[i]='-';}
    }
    printf("%s",a);

}