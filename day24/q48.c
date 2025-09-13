/*Q48: Write a program to print the following pattern:
1
12
123
1234
12345*/

/*
Sample Test Cases:
Input 1:

Output 1:
1
12
123
1234
12345

*/
#include <stdio.h>

void rows(int a,int b);
void numbers(int b,int c);
int main(){
    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);
    rows(n,n);
    return 0;
}

//print numbers
void numbers(int b, int c){
    if(b==0)
    return;
    else
    printf("%d",c);


    numbers(b-1,c+1);
}
//print rows
void rows(int a , int b){
    if (a==0)
    return;
    else
    numbers(b-(a-1),1);
    
    printf("\n");
    rows(a-1,b);
}