/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
***** */
#include <stdio.h>
void rows(int n,int a);
int main(){
    int n,a;
    printf("enter no. of rows: ");
    scanf("%d",&n);
    a=n;
    rows(n,a);
    return 0;
}
void star(int n){
   if(n==0)
   return ;
   else 
  { printf("*");
    star((n-1));}

}
void rows(int n,int a){
    if(n==0)
    return ;
    else
    star(a);
    printf("\n");
    rows(n-1,a);
}
