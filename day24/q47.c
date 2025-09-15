/*Q47: Write a program to print the following pattern:
*
**
***
****
***** */

#include <stdio.h>
void rows(int a,int b);
void stars(int b,int c);
int main(){
    int n;
    printf("enter no of rows: ");
    scanf("%d",&n);
    rows(n,n);
    return 0;
}
//print no. of stars per row
void stars(int b,int c){
        if((b-c)>0)
        printf("*");
        else 
        return;
       
        
     stars(b,c+1);
}
//build rows
void rows(int a,int b){
    if(a==0)
    return;
    else
        stars(b,a-1);
        printf("\n");
        rows(a-1,b);
}